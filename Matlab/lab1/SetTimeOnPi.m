% This script sets matlab/PC time on RaspberryPi
% (c) Björn Åstrand, 2017
% Connect network cable before powering rasberry pi.
% find IP adress by logging in to rasberry and use "ifconfig"
close all; clear all; 
% MATLAB Support Package for Raspberry Pi Hardware Functions
% https://se.mathworks.com/help/supportpkg/raspberrypiio/functionlist.html
% clear previous connections (handle)
clear mypi
clear mysh
mypi = raspi('169.254.0.2','pi','raspberry'); % Deafault username and password
% run system comands on raspberry pi
% https://se.mathworks.com/help/supportpkg/raspberrypiio/ref/raspi.system.html
S1 = system(mypi,'date -R');
disp(strcat('The time on your RaspbarryPi is: ',S1));
% Get matlab date and time as string
S2 = datestr(now);
disp(strcat('And Matlab time is: ',S2));
disp('...changing time on Pi');

% Run a Command with Superuser Privileges
% You can run a command with superuser privileges.
% "sudo date -s "24-Nov-2017 17:03:00"
S3 = strcat('date -s "',S2,'"');
system(mypi,S3,'sudo');

% check that its set
S4 = system(mypi,'date -R');
disp(strcat('And now the time on your RaspbarryPi is: ',S4));





