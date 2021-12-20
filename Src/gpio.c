/**
  ******************************************************************************
  * File Name          : gpio.c
  * Description        : This file provides code for the configuration
  *                      of all used GPIO pins.
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

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as 
        * Analog 
        * Input 
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, FPGA_CTR15_Pin|FPGA_CTR11_Pin|FPGA_CTR14_Pin|FPGA_CTR16_Pin 
                          |FPGA_CTR3_Pin|FPGA_CTR22_Pin|FPGA_CTR13_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, FPGA_CTR5_Pin|FPGA_CTR2_Pin|FPGA_CTR1_Pin|FPGA_CTR4_Pin 
                          |FPGA_CTR8_Pin|FPGA_CTR6_Pin|FPGA_CTR7_Pin|FPGA_CTR21_Pin 
                          |FPGA_CTR17_Pin|FPGA_CTR18_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, WatchDogInput_Pin|FPGA_CTR9_Pin|FPGA_CTR10_Pin|FPGA_CTR12_Pin 
                          |FPGA_CTR20_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, PB12_SPI2_LED_CS_Pin|MCU_State_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, FPGA_CTR19_Pin|FPGA_CTR23_Pin|FPGA_CTR24_Pin, GPIO_PIN_SET);

  /*Configure GPIO pins : PEPin PEPin PEPin PEPin 
                           PEPin PEPin PEPin */
  GPIO_InitStruct.Pin = FPGA_CTR15_Pin|FPGA_CTR11_Pin|FPGA_CTR14_Pin|FPGA_CTR16_Pin 
                          |FPGA_CTR3_Pin|FPGA_CTR22_Pin|FPGA_CTR13_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PCPin PCPin PCPin PCPin 
                           PCPin PCPin PCPin PCPin 
                           PCPin PCPin */
  GPIO_InitStruct.Pin = FPGA_CTR5_Pin|FPGA_CTR2_Pin|FPGA_CTR1_Pin|FPGA_CTR4_Pin 
                          |FPGA_CTR8_Pin|FPGA_CTR6_Pin|FPGA_CTR7_Pin|FPGA_CTR21_Pin 
                          |FPGA_CTR17_Pin|FPGA_CTR18_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PAPin PAPin PAPin PAPin 
                           PAPin */
  GPIO_InitStruct.Pin = WatchDogInput_Pin|FPGA_CTR9_Pin|FPGA_CTR10_Pin|FPGA_CTR12_Pin 
                          |FPGA_CTR20_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PAPin PAPin PAPin PAPin */
  GPIO_InitStruct.Pin = CH7_FB_Pin|CH17_FB_Pin|CH20_FB_Pin|CH21_FB_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PCPin PCPin PCPin PCPin 
                           PCPin PCPin */
  GPIO_InitStruct.Pin = CH6_FB_Pin|CH8_FB_Pin|CH24_FB_Pin|CH23_FB_Pin 
                          |CH19_FB_Pin|CH18_FB_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin */
  GPIO_InitStruct.Pin = CH4_FB_Pin|CH2_FB_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PEPin PEPin PEPin PEPin 
                           PEPin PEPin PEPin PEPin 
                           PEPin */
  GPIO_InitStruct.Pin = CH1_FB_Pin|CH15_FB_Pin|CH3_FB_Pin|CH11_FB_Pin 
                          |CH5_FB_Pin|CH9_FB_Pin|CH14_FB_Pin|CH10_FB_Pin 
                          |CH16_FB_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin */
  GPIO_InitStruct.Pin = PB12_SPI2_LED_CS_Pin|MCU_State_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = STABLE2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(STABLE2_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PDPin PDPin PDPin PDPin 
                           PDPin PDPin PDPin PDPin 
                           PDPin PDPin PDPin PDPin */
  GPIO_InitStruct.Pin = FieldPowerERR_Pin|CH12_FB_Pin|CH22_FB_Pin|CH13_FB_Pin 
                          |SLOT_NUM0_Pin|SLOT_NUM1_Pin|SLOT_NUM2_Pin|SLOT_NUM3_Pin 
                          |SLOT_NUM4_Pin|CASE_NUM0_Pin|CASE_NUM1_Pin|CASE_NUM2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin PBPin */
  GPIO_InitStruct.Pin = FPGA_CTR19_Pin|FPGA_CTR23_Pin|FPGA_CTR24_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = ONLINE_RX_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(ONLINE_RX_GPIO_Port, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
