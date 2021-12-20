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
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#define FPGA_CTR15_Pin GPIO_PIN_2
#define FPGA_CTR15_GPIO_Port GPIOE
#define FPGA_CTR11_Pin GPIO_PIN_3
#define FPGA_CTR11_GPIO_Port GPIOE
#define FPGA_CTR14_Pin GPIO_PIN_4
#define FPGA_CTR14_GPIO_Port GPIOE
#define FPGA_CTR16_Pin GPIO_PIN_5
#define FPGA_CTR16_GPIO_Port GPIOE
#define FPGA_CTR3_Pin GPIO_PIN_6
#define FPGA_CTR3_GPIO_Port GPIOE
#define FPGA_CTR5_Pin GPIO_PIN_13
#define FPGA_CTR5_GPIO_Port GPIOC
#define FPGA_CTR2_Pin GPIO_PIN_14
#define FPGA_CTR2_GPIO_Port GPIOC
#define FPGA_CTR1_Pin GPIO_PIN_15
#define FPGA_CTR1_GPIO_Port GPIOC
#define FPGA_CTR4_Pin GPIO_PIN_0
#define FPGA_CTR4_GPIO_Port GPIOC
#define FPGA_CTR8_Pin GPIO_PIN_1
#define FPGA_CTR8_GPIO_Port GPIOC
#define FPGA_CTR6_Pin GPIO_PIN_2
#define FPGA_CTR6_GPIO_Port GPIOC
#define FPGA_CTR7_Pin GPIO_PIN_3
#define FPGA_CTR7_GPIO_Port GPIOC
#define WatchDogInput_Pin GPIO_PIN_0
#define WatchDogInput_GPIO_Port GPIOA
#define PA1_USART2_DE_Pin GPIO_PIN_1
#define PA1_USART2_DE_GPIO_Port GPIOA
#define PA2_USART2_TX_Pin GPIO_PIN_2
#define PA2_USART2_TX_GPIO_Port GPIOA
#define PA3_USART2_RX_Pin GPIO_PIN_3
#define PA3_USART2_RX_GPIO_Port GPIOA
#define FPGA_CTR9_Pin GPIO_PIN_4
#define FPGA_CTR9_GPIO_Port GPIOA
#define FPGA_CTR10_Pin GPIO_PIN_5
#define FPGA_CTR10_GPIO_Port GPIOA
#define FPGA_CTR12_Pin GPIO_PIN_6
#define FPGA_CTR12_GPIO_Port GPIOA
#define CH7_FB_Pin GPIO_PIN_7
#define CH7_FB_GPIO_Port GPIOA
#define CH6_FB_Pin GPIO_PIN_4
#define CH6_FB_GPIO_Port GPIOC
#define CH8_FB_Pin GPIO_PIN_5
#define CH8_FB_GPIO_Port GPIOC
#define MCU_3V3_MON_Pin GPIO_PIN_0
#define MCU_3V3_MON_GPIO_Port GPIOB
#define CH4_FB_Pin GPIO_PIN_1
#define CH4_FB_GPIO_Port GPIOB
#define CH2_FB_Pin GPIO_PIN_2
#define CH2_FB_GPIO_Port GPIOB
#define CH1_FB_Pin GPIO_PIN_7
#define CH1_FB_GPIO_Port GPIOE
#define CH15_FB_Pin GPIO_PIN_8
#define CH15_FB_GPIO_Port GPIOE
#define CH3_FB_Pin GPIO_PIN_9
#define CH3_FB_GPIO_Port GPIOE
#define CH11_FB_Pin GPIO_PIN_10
#define CH11_FB_GPIO_Port GPIOE
#define CH5_FB_Pin GPIO_PIN_11
#define CH5_FB_GPIO_Port GPIOE
#define CH9_FB_Pin GPIO_PIN_12
#define CH9_FB_GPIO_Port GPIOE
#define CH14_FB_Pin GPIO_PIN_13
#define CH14_FB_GPIO_Port GPIOE
#define CH10_FB_Pin GPIO_PIN_14
#define CH10_FB_GPIO_Port GPIOE
#define CH16_FB_Pin GPIO_PIN_15
#define CH16_FB_GPIO_Port GPIOE
#define PB12_SPI2_LED_CS_Pin GPIO_PIN_12
#define PB12_SPI2_LED_CS_GPIO_Port GPIOB
#define PB13_SPI2_SCK_Pin GPIO_PIN_13
#define PB13_SPI2_SCK_GPIO_Port GPIOB
#define PB14_SPI2_MISO_Pin GPIO_PIN_14
#define PB14_SPI2_MISO_GPIO_Port GPIOB
#define PB15_SPI2_MOSI_Pin GPIO_PIN_15
#define PB15_SPI2_MOSI_GPIO_Port GPIOB
#define PD8_USART3_TX_Pin GPIO_PIN_8
#define PD8_USART3_TX_GPIO_Port GPIOD
#define PD9_USART3_RX_Pin GPIO_PIN_9
#define PD9_USART3_RX_GPIO_Port GPIOD
#define PA12_USART3_DE_Pin GPIO_PIN_10
#define PA12_USART3_DE_GPIO_Port GPIOD
#define STABLE2_Pin GPIO_PIN_11
#define STABLE2_GPIO_Port GPIOD
#define FieldPowerERR_Pin GPIO_PIN_12
#define FieldPowerERR_GPIO_Port GPIOD
#define CH12_FB_Pin GPIO_PIN_13
#define CH12_FB_GPIO_Port GPIOD
#define CH22_FB_Pin GPIO_PIN_14
#define CH22_FB_GPIO_Port GPIOD
#define CH13_FB_Pin GPIO_PIN_15
#define CH13_FB_GPIO_Port GPIOD
#define CH24_FB_Pin GPIO_PIN_6
#define CH24_FB_GPIO_Port GPIOC
#define CH23_FB_Pin GPIO_PIN_7
#define CH23_FB_GPIO_Port GPIOC
#define CH19_FB_Pin GPIO_PIN_8
#define CH19_FB_GPIO_Port GPIOC
#define CH18_FB_Pin GPIO_PIN_9
#define CH18_FB_GPIO_Port GPIOC
#define CH17_FB_Pin GPIO_PIN_8
#define CH17_FB_GPIO_Port GPIOA
#define UART_CAL_TX_Pin GPIO_PIN_9
#define UART_CAL_TX_GPIO_Port GPIOA
#define UART_CAL_RX_Pin GPIO_PIN_10
#define UART_CAL_RX_GPIO_Port GPIOA
#define CH20_FB_Pin GPIO_PIN_11
#define CH20_FB_GPIO_Port GPIOA
#define CH21_FB_Pin GPIO_PIN_12
#define CH21_FB_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define FPGA_CTR20_Pin GPIO_PIN_15
#define FPGA_CTR20_GPIO_Port GPIOA
#define FPGA_CTR21_Pin GPIO_PIN_10
#define FPGA_CTR21_GPIO_Port GPIOC
#define FPGA_CTR17_Pin GPIO_PIN_11
#define FPGA_CTR17_GPIO_Port GPIOC
#define FPGA_CTR18_Pin GPIO_PIN_12
#define FPGA_CTR18_GPIO_Port GPIOC
#define SLOT_NUM0_Pin GPIO_PIN_0
#define SLOT_NUM0_GPIO_Port GPIOD
#define SLOT_NUM1_Pin GPIO_PIN_1
#define SLOT_NUM1_GPIO_Port GPIOD
#define SLOT_NUM2_Pin GPIO_PIN_2
#define SLOT_NUM2_GPIO_Port GPIOD
#define SLOT_NUM3_Pin GPIO_PIN_3
#define SLOT_NUM3_GPIO_Port GPIOD
#define SLOT_NUM4_Pin GPIO_PIN_4
#define SLOT_NUM4_GPIO_Port GPIOD
#define CASE_NUM0_Pin GPIO_PIN_5
#define CASE_NUM0_GPIO_Port GPIOD
#define CASE_NUM1_Pin GPIO_PIN_6
#define CASE_NUM1_GPIO_Port GPIOD
#define CASE_NUM2_Pin GPIO_PIN_7
#define CASE_NUM2_GPIO_Port GPIOD
#define FPGA_CTR19_Pin GPIO_PIN_3
#define FPGA_CTR19_GPIO_Port GPIOB
#define FPGA_CTR23_Pin GPIO_PIN_4
#define FPGA_CTR23_GPIO_Port GPIOB
#define FPGA_CTR24_Pin GPIO_PIN_5
#define FPGA_CTR24_GPIO_Port GPIOB
#define MCU_State_Pin GPIO_PIN_8
#define MCU_State_GPIO_Port GPIOB
#define ONLINE_RX_Pin GPIO_PIN_9
#define ONLINE_RX_GPIO_Port GPIOB
#define FPGA_CTR22_Pin GPIO_PIN_0
#define FPGA_CTR22_GPIO_Port GPIOE
#define FPGA_CTR13_Pin GPIO_PIN_1
#define FPGA_CTR13_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
