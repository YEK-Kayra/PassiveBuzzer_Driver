# PassiveBuzzer_Driver
İf you use Passive Buzzer you will need some calculation to start module. 
I will explain how it works code and this module. Okay let's look at below!

First of all you need a timer to create PWM signals to play your Passive Buzzer
**I choosed TIM2 and and its first Channel. This pin is an output that give us PWM signals**
we learned this module works by **Resonant Frequency: 2-3KHz** when we look at the Passive Buzzer's datasheet 

There are some formulas to calculate PWM frequency as given below:

_PWM_Frequence = Timer_Clock / ((Prescaler + 1) * (Period + 1))_

**!Period is the ARR(AutoReloadRegister) value**

**!Prescaler is the PSC value**

**!Timer_Clock is the value of timer's clock bus**

For example if you have 3Khz Passive Buzzer. And you timer clock bus is fed 72Mhz
When we calculate that:

_3000 = (72*(10^6)) / ((Prescaler + 1) * (Period + 1))_


_((Prescaler + 1) * (Period + 1)) = 24 * (10^3)_

PSC and ARR are a 16bit variable. So they can take max value is 65535

I will try ARR is 100. Because ARR works like 0-100 scale. We can say duty cycle.

_PSC + 1 = 240_

_PSC = 239_


