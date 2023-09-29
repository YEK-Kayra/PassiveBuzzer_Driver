*!
 *  @file : PassiveBuzz.c
 *  @date : 12-09-2023
 *  @version : v1.0.0
 *
 /*      Author: Yunus Emre KAYRA (https://github.com/YEK-Kayra)
 ******************************************************************************
 * 	@attention
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2023 TAISAT Turkish Artificial Intelligence Supported Autonomous Technologies
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/**
 * @def MY_DRIVERS_YX7525P_APP_DRIVER_YX7525P_H_
 * @brief
 *
 */


#ifndef INC_PASSIVEBUZZ_H_
#define INC_PASSIVEBUZZ_H_

#include "main.h"



/**
 * @func  : void Buzz_ON(TIM_HandleTypeDef *htim_X, uint32_t PWM_Channel_X)
 * @brief : Buzzer is set when the function is called(DutyCycle is configurated by the CCRx REG)
 * @param :  htim_X        : it's set by &htimX. X is the number of timers
 * @param :  PWM_Channel_X :  it's set by TIM_CHANNEL_X . X is the number of timer's channels
 * @retval: None
 */
void PassiveBuzz_ON(TIM_HandleTypeDef *htim_X, uint32_t PWM_Channel_X);

/**
 * @func.  : void PassiveBuzz_OFF(TIM_HandleTypeDef *htim_X, uint32_t PWM_Channel_X)
 * @brief  : Buzzer is deactivated when the function is called (DutyCycle is zero)
 * @param  : htim_X        : it's set by &htimX. X is the number of timers
 * @param  : PWM_Channel_X :  it's set by TIM_CHANNEL_X . X is the number of timer's channels
 * @retval : None
 */
void PassiveBuzz_OFF(TIM_HandleTypeDef *htim_X, uint32_t PWM_Channel_X);

/**
 * @func.  : void PassiveBuzz_Init(TIM_HandleTypeDef *htim_X, uint32_t PWM_Channel_X)
 * @brief  : Buzzer and timer's settings is prepared when the function is called
 * @param  : htim_X        : it's set by &htimX. X is the number of timers
 * @param  : PWM_Channel_X :  it's set by TIM_CHANNEL_X . X is the number of timer's channels
 * @retval : None
 */
void PassiveBuzz_Init(TIM_HandleTypeDef *htim_X, uint32_t PWM_Channel_X);


#endif /* INC_PASSIVEBUZZ_H_ */
