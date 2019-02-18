mypi = raspi('169.254.0.2','pi','raspberry');
mypi.getFile('/home/pi/step_responce.mat');
Step = load('step_responce');

subplot(4,1,1);
plot(Step.ans(1,:),Step.ans(2,:))
title('Encoder')

subplot(4,1,2);
plot(Step.ans(1,:),Step.ans(3,:))
title('PWM/Steg')

subplot(4,1,3);
plot(Step.ans(1,:),Step.ans(4,:))
title('Speed')

subplot(4,1,4);
plot(Step.ans(1,3:end),Step.ans(5,3:end))
title('RPM')

hold off