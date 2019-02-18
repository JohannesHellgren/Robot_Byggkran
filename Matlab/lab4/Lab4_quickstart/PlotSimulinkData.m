% (c) Björn Åstrand 2017
% This plots data stored by Simulink on th Pi
% Get file from Pi -> stored in local directory on PC
close all;
clear mypi;
mypi = raspi('169.254.0.2','pi','raspberry');
% Label outputs
S = {'Time','Speed','Process output','Reference'};
% get file
getFile(mypi,'/home/pi/step_responce.mat');
% load file
A = load('step_responce.mat');
% Plot values
[r c] = size(A.ans);
if (r<10), % just preventing something bad happen :)
    for x=1:r, 
        figure, plot(A.ans(1,:),A.ans(x,:));
        title(S(x));
        grid on; 
    end
end
% Plots combined
figure, 
for x=2:r,
    plot(A.ans(1,:),A.ans(x,:));
    hold on;
end
xlabel(S(1));
legend(S(2:end));
grid on;
% Sample time
t = diff(A.ans(1,:));
[A.ans(1,1) A.ans(1,end) t(1)]


