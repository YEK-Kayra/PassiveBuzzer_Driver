# PassiveBuzzer_Driver
İf you use Passive Buzzer you will need some calculation to start module. 
I will explain how it works code and this module. Okay let's look at below!

First of all you need a timer to create PWM signals to play your Passive Buzzer
I choosed TIM2 and and its first Channel. This pin is an output that give us PWM signals
When we look at the Passive Buzzer's datasheet we learned this module works by 5KHz
To set out timer in 5KHz we need to change PSC and ARR variables

![image](https://github.com/YEK-Kayra/PassiveBuzzer_Driver/assets/124110070/057c47d0-e264-4560-aea6-79962aecd0f5)
![image](https://github.com/YEK-Kayra/PassiveBuzzer_Driver/assets/124110070/5a93b04b-fb35-4fb2-8965-55bb389685af)

