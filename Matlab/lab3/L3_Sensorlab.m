% Laboratory exercise using raspberry pi and sense hat in mathlab
% (c) Björn Åstrand, 2016
% Connect network cable before powering rasberry pi.
% find IP adress by logging in to rasberry and use "ifconfig"
close all; clear all; 
% MATLAB Support Package for Raspberry Pi Hardware Functions
% https://se.mathworks.com/help/supportpkg/raspberrypiio/functionlist.html
% clear previous connections (handle)
clear mypi
clear mysh
mypi = raspi('169.254.0.2','pi','raspberry'); % Deafault username and password
% showLEDs(mypi);
% Do some blinking 
for ii = 1:0%100
    writeLED(mypi,'led0',1)
    pause(0.05)
    writeLED(mypi,'led0',0)
    pause(0.05)
end
% -----------------------------------------------------------------------
% Test reading data from raspberry pi senseHat
mysh = sensehat(mypi); % create a hat object

dt = 0.06345;
fc = 1;
RC = 1/(fc*2*pi);
alpha = dt / (RC + dt);
z = 2;
h = figure('KeyPressFcn','keep=0'); % Press eny key to exit while loop!
keep = 1;
DATA(1,:) = [0 0 0 0 0 0 0 0 0 0 0 0];
while keep
    [angularVelocity, ts1] = readAngularVelocity(mysh);
    %[angularVelocity, ts1] = readAngularVelocity(mysh,'raw');
    [Acceleration,ts2]= readAcceleration(mysh);
    %[Acceleration,ts2]= readAcceleration(mysh,'raw');
    Axf = alpha * (Acceleration(1) - 0.015) + (1-alpha) * DATA(z-1,1);
    Ayf = alpha * (Acceleration(2) - 0.14) + (1-alpha) * DATA(z-1,2);
    Azf = alpha * Acceleration(3) + (1-alpha) * DATA(z-1,3);
    Ax = (Acceleration(1) - 0.015);
    Ay = (Acceleration(2) - 0.14);
    Az = Acceleration(3);
    
    Gx = angularVelocity(1)*180/pi; % NOTE IN RADIANS -> convert to degrees
    Gy = angularVelocity(2)*180/pi; % NOTE IN RADIANS -> convert to degrees
    Gz = angularVelocity(3)*180/pi; % NOTE IN RADIANS -> convert to degrees
    % Convert sample time to seconds only
    T1 = ts1.Hour*3600+ts1.Minute*60+ts1.Second; 
    T2 = ts2.Hour*3600+ts2.Minute*60+ts2.Second;
    % Store all data in one matrix
    
    pitchf = atan2d(Axf, sqrt(Ayf*Ayf + Azf*Azf)); 
    rollf = atan2d(-Ayf, Azf);
    
    pitch = atan2d(Ax, sqrt(Ay*Ay + Az*Az)); 
    roll = atan2d(-Ay, Az);
    Ap = alpha * pitch + (1-alpha) * DATA(z-1,11);
    Ar = alpha * roll + (1-alpha) * DATA(z-1,12);
    
    
    DATA(z,:) = [Axf Ayf Azf Gx Gy Gz T1 T2 pitchf rollf Ap Ar]; 
    if (z>100),
        %plot(DATA((z-100):z,1),'r'); hold on; % Ax
        %plot(DATA((z-100):z,2),'g'); hold on; % Ay
        %plot(DATA((z-100):z,3),'b'); hold off;% Az
        
        plot(DATA((z-100):z,9),'r'); hold on;   %pitchf
        plot(DATA((z-100):z,10),'b'); hold on; %rollf
        
        plot(DATA((z-100):z,11),'g'); hold on;   %pitch
        plot(DATA((z-100):z,12),'y'); hold off; %roll
        
        ylim([-200 200]);  % Don't forget to change resolution if nesserary
        grid on;
        drawnow();
    end
    z = z + 1;
    %pause(0.001);
end
figure, plot(diff(DATA(:,7))); 
hold on; grid on; 
plot(diff(DATA(:,8)));
legend('Angular velocity','Acceleration');
ylabel('sample time');
xlabel('sample');

%% 
sigma = var(DATA(:,1)) + var(DATA(:,2)) + var(DATA(:,3));
mu = mean(DATA(:,1)) + mean(DATA(:,2)) + mean(DATA(:,3));
x = [-3:.1:3];
a = normpdf(x,mu,sigma);
%figure;
%plot(x,g);
freq = tabulate(DATA(:,1))

gx = DATA(:,1).*DATA(:,1);
gy = DATA(:,2).*DATA(:,2);
gz = DATA(:,3).*DATA(:,3);
v = var(gx)
m = mean(gx)

figure;
myfft(DATA(:,1),dt);
hold on;
%figure;
myfft(DATA(:,9),dt);

%% 
%Pitch
%tan(si) = -gx/sqrt(gy.^2 + gz.^2)
pitch = atan2d(Axf, sqrt(Ayf*Ayf + Azf*Azf)); 

%roll
%tan(th) = gy/gz;
roll = atan2d(-Ayf, Azf); 

maxP = max(pitch)
maxR = max(roll)

minP = min(pitch)
minR = min(roll)



