/*------------------------------------------------------------------------------
 * @file    OLED.H
 * @author  Hovey https://space.bilibili.com/33582262?spm_id_from=333.1007.0.0
 * @date    2024/04/30 22:47:03
 * @brief   
 * -----------------------------------------------------------------------------
 * @attention 
 
------------------------------------------------------------------------------*/

/* Define to prevent recursive inclusion  ------------------------------------*/
#ifndef __OLED_H
#define __OLED_H

/* Files includes  -----------------------------------------------------------*/
#include "main.h"

/* Defines -------------------------------------------------------------------*/
//-----------------OLED端口定义---------------- 
#define RES_LOW HAL_GPIO_WritePin(OLED_RES_GPIO_Port,OLED_RES_Pin,GPIO_PIN_RESET)
#define RES_HIGH HAL_GPIO_WritePin(OLED_RES_GPIO_Port,OLED_RES_Pin,GPIO_PIN_SET)
#define CS_LOW HAL_GPIO_WritePin(SPI1_CS_GPIO_Port,SPI1_CS_Pin,GPIO_PIN_RESET)
#define CS_HIGH HAL_GPIO_WritePin(SPI1_CS_GPIO_Port,SPI1_CS_Pin,GPIO_PIN_SET)
#define DC_LOW HAL_GPIO_WritePin(OLED_DC_GPIO_Port,OLED_DC_Pin,GPIO_PIN_RESET)
#define DC_HIGH HAL_GPIO_WritePin(OLED_DC_GPIO_Port,OLED_DC_Pin,GPIO_PIN_SET)
#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据

/* Variables -----------------------------------------------------------------*/


/* Functions ----------------------------------------------------------------*/
void OLED_Init(void);
void OLED_DrawPoint(uint8_t x,uint8_t y,uint8_t t);
void OLED_Refresh(void);
#endif
