/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define relay_1_Pin GPIO_PIN_4
#define relay_1_GPIO_Port GPIOA
#define relay_2_Pin GPIO_PIN_5
#define relay_2_GPIO_Port GPIOA
#define TR_Pin GPIO_PIN_6
#define TR_GPIO_Port GPIOA
#define forward_led_1_Pin GPIO_PIN_1
#define forward_led_1_GPIO_Port GPIOB
#define led_buzzer_Pin GPIO_PIN_2
#define led_buzzer_GPIO_Port GPIOB
#define buzzer_Pin GPIO_PIN_8
#define buzzer_GPIO_Port GPIOA
#define relay_3_Pin GPIO_PIN_11
#define relay_3_GPIO_Port GPIOA
#define forward_led_2_Pin GPIO_PIN_15
#define forward_led_2_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
