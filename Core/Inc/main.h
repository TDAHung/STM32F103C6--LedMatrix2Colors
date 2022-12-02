/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN Private defines */
#define LedPort GPIOA
#define LedPin GPIO_PIN_13

#define ColPort GPIOA
#define Col1 GPIO_PIN_1
#define Col2 GPIO_PIN_2
#define Col3 GPIO_PIN_3
#define Col4 GPIO_PIN_4
#define Col5 GPIO_PIN_5
#define Col6 GPIO_PIN_6
#define Col7 GPIO_PIN_7
#define Col8 GPIO_PIN_8

#define RowPort GPIOB

#define RowRed1 GPIO_PIN_8
#define RowRed2 GPIO_PIN_9
#define RowRed3 GPIO_PIN_10
#define RowRed4 GPIO_PIN_11
#define RowRed5 GPIO_PIN_12
#define RowRed6 GPIO_PIN_13
#define RowRed7 GPIO_PIN_14
#define RowRed8 GPIO_PIN_15

#define RowGreen1 GPIO_PIN_0
#define RowGreen2 GPIO_PIN_1
#define RowGreen3 GPIO_PIN_2
#define RowGreen4 GPIO_PIN_3
#define RowGreen5 GPIO_PIN_4
#define RowGreen6 GPIO_PIN_5
#define RowGreen7 GPIO_PIN_6
#define RowGreen8 GPIO_PIN_7

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
