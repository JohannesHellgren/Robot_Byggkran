% (c) Björn Åstrand, Tommy Salomonson 2017
clear all; close all;
% NOTE MATLAB DONT UPDATE FILE THEN USNING READ TO FILE UNLESS YOU ENTER
% SOMTHING IN THE DIALOG BOX,e.g. an extra space
% Use "From Workspace" instead
% Note! Time in first column and data in second!
% Everything is stored in R

% Check that this is OK!
% 1 speed unit is 100 encodervalues/s
% counts per turn 128
% Gear reduction 3.9:1
% 1 revolution is 3.9 revolutions on motor that gives
% 128*3.9 = 499.2 pulses per revolution
% Using quad-encoders gives 4*499.2 = 1996.8 pulses/turn ?

%Parametrar
StartPos = 0;
A = 50%20%50
MaxAcc = A; % Acceleration
DeAcc = -A; % Deacceleration
MaxSpeed = 10; % Max Speed
EndPos = 200%500%1000; % End Position in "samples"????
h = 0.01; % SampleTime
rev = 10;
%EndPos = round(rev*1996.8*0.01)


% Init
BreakPos=0; 
Position = StartPos;
Speed = 0;
OldSpeed = 0;
n = 0;

% Program
if EndPos > StartPos
    dXc = EndPos - Position;
    dXmin = Speed*Speed/(2*MaxAcc);
    while dXmin < dXc
    % Calculation
        if Speed < (MaxSpeed - MaxAcc * h)
            Speed = OldSpeed + MaxAcc * h;
        else
            Speed = MaxSpeed;
        end
        Position = Position + Speed * h;
        dXc = EndPos - Position;
        dXmin = Speed*Speed/(2*MaxAcc);
        % save variable for plotting
        n = n + 1; 
        Pos(n) = Position;
        Sp(n) = Speed;
        Acc(n) = (Speed-OldSpeed)/h;
        OldSpeed = Speed;
    end
    while Speed>0
    % Calculation
        Speed = OldSpeed - MaxAcc * h; 
        Position = Position + Speed * h;
        % save variable for plotting
        n = n + 1; 
        Pos(n) = Position;
        Sp(n) = Speed;
        Acc(n) = (Speed-OldSpeed)/h;
        OldSpeed = Speed;
    end
else
    dXc = EndPos - Position;
    dXmin = Speed*Speed/(2*MaxAcc);
    while dXmin > dXc
    % Calculation
        if Speed > (-MaxSpeed + MaxAcc * h)
            Speed = OldSpeed - MaxAcc * h;
        else
            Speed = - MaxSpeed;
        end
        Position = Position + Speed * h;
        dXc = EndPos - Position;
        dXmin = -Speed*Speed/(2*MaxAcc);
        % save variable for plotting
        n = n + 1; 
        Pos(n) = Position;
        Sp(n) = Speed;
        Acc(n) = (Speed-OldSpeed)/h;
        OldSpeed = Speed;
    end
    while Speed<0
    % Calculation
        Speed = OldSpeed + MaxAcc * h; 
        Position = Position + Speed * h;
        % save variable for plotting
        n = n + 1; 
        Pos(n) = Position;
        Sp(n) = Speed;
        Acc(n) = (Speed-OldSpeed)/h;
        OldSpeed = Speed;
    end         
end

%Plot
subplot(3,1,1)
plot((1:length(Pos))*h,Pos)
axis([0 length(Pos)*h -max(abs(Pos))*1.2 max(abs(Pos))*1.2]); %
legend('Position')
grid on;

subplot(3,1,2)
plot((1:length(Sp))*h,Sp)
axis([0 length(Sp)*h -max(abs(Sp))*1.2 max(abs(Sp))*1.2]); %
legend('Speed')
grid on;
subplot(3,1,3)
plot((1:length(Acc))*h,Acc)
axis([0 length(Acc)*h -max(abs(Acc))*1.2 max(abs(Acc))*1.2]); % BÅ
legend('Acceleration')
xlabel('time [s]');
grid on;

% Store all DATA in a vector to be imported into Simulink -> R
t = 0:h:(length(Pos)+10)*h;
R = [t;[Sp zeros(1,11)]]; % Extra zeros migth be needed
% Start and end time
[t(1) t(end)]





