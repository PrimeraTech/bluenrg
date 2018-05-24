/**
  ******************************************************************************
  * @file    low_power_conf.h 
  * @author  CL
  * @version V1.0.0
  * @date    04-July-2014
  * @brief   
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2014 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LOW_POWER_CONF_H_
#define __LOW_POWER_CONF_H_

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32xx_lpm.h"
#include "stm32xx_hal_app_rcc.h"
   
#ifdef USE_STM32L0XX_NUCLEO
#include "stm32l0xx_hal.h"
#include "stm32l0xx_nucleo.h"
#include "stm32l0xx_hal_rtc.h"
#include "stm32l0xx_hal_rtc_ex.h"
   
#define WAKE_UP_COUNTER 0x987
#endif /* USE_STM32L0XX_NUCLEO */

#ifdef USE_STM32L4XX_NUCLEO
#include "stm32l4xx_hal.h"
#include "stm32l4xx_nucleo.h"
#include "stm32l4xx_hal_rtc.h"
#include "stm32l4xx_hal_rtc_ex.h"
   
//SO: TO BE VERIFIED FOR L4
#define WAKE_UP_COUNTER 0x0802
#endif /* USE_STM32L4XX_NUCLEO */

#ifdef USE_STM32F4XX_NUCLEO
#include "stm32f4xx_hal.h"
#include "stm32f4xx_nucleo.h"
#include "stm32f4xx_hal_rtc.h"
#include "stm32f4xx_hal_rtc_ex.h"
   
#define WAKE_UP_COUNTER 0x0802
#endif /* USE_STM32F4XX_NUCLEO */

/* Exported constants --------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/
/* Defines related to RTC Clock configuration */    
/* Uncomment to enable the adaquate Clock Source */
#define RTC_CLOCK_SOURCE_LSI
/* #define RTC_CLOCK_SOURCE_LSE */

#ifdef RTC_CLOCK_SOURCE_LSI
  #define RTC_ASYNCH_PREDIV    0x7F
  #define RTC_SYNCH_PREDIV     0x0130
#endif

/* RTC Timer setting */
#define UPDATE_INTERVAL   1000.00 /* ms*/

/* Global variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
void SystemPower_Config(void);
   
#ifdef __cplusplus
}
#endif

#endif //__LOW_POWER_CONF_H_

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/