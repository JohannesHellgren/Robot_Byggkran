function [f, amp] = myfft(data, tsamp)

Fs = 1/tsamp;           % Sample Frequency
T = tsamp;              % Sample Time
L = length(data);       % Data Lenght

x = data;               % Data

NFFT = 2^nextpow2(L);   % Next power of 2 from length of x
Y = fft(x,NFFT)/L;      % Perform FFT
f = Fs/2*linspace(0,1,NFFT/2+1);    % Gemerate frequency vector

% Plot single-sided amplitude spectrum
amp = 2*abs(Y(1:NFFT/2+1));
loglog(f,amp);
% plot(f,amp);
title('Single-Sided Amplitude Spectrum of data(t)')
xlabel('Frequency (Hz)')
ylabel('|Data(f)|')