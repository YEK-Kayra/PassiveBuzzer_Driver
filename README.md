# PassiveBuzzer_Driver
İf you use Passive Buzzer you will need some calculation to start module. 
I will explain how it works code and this module. Okay let's look at below!

First of all you need a timer to create PWM signals to play your Passive Buzzer
**I choosed TIM2 and and its first Channel. This pin is an output that give us PWM signals**
we learned this module works by **Resonant Frequency: 2-3KHz** when we look at the Passive Buzzer's datasheet 

There are some formulas to calculate PWM frequency as given below:

PWM_Frequence = Timer_Clock / ((Prescaler + 1) * (Period + 1))

!Period is the ARR(AutoReloadRegister) value
!Prescaler is the PSC value
!Timer_Clock is the value of timer's clock bus



