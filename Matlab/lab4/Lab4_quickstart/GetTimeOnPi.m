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
disp(strcat('RaspbarryPi time is :',S1));
% Get matlab date and time as string
S2 = datestr(now);
disp(strcat('Matlab time is      :',S2));

