/*------------------------------------------------------------------------------
 * @file    SYS_SERVICE.CPP
 * @author  Hovey https://space.bilibili.com/33582262?spm_id_from=333.1007.0.0
 * @date    2024/04/30 17:50:53
 * @brief   
 * -----------------------------------------------------------------------------
 * @attention 
 
------------------------------------------------------------------------------*/
#include "Application/include/sys_init.h"
#include "Application/include/sys_internal.h"

TaskHandle_t oled_handle;

void TaskOled(void *arg);
/**
* @brief  
* @param  
* @return 
*/
void AppInit()
{
	xTaskCreate(TaskOled,"App.Oled",Huge_Stack_Size, NULL, PriorityNormal,&oled_handle);
}

/**
* @brief  
* @param  
* @return 
*/
void TaskOled(void *arg)
{
    /* Pre-Load for task */
    TickType_t xLastWakeTime_t;
    xLastWakeTime_t = xTaskGetTickCount();
    for(;;){
        /* wait for next circle */
        vTaskDelayUntil(&xLastWakeTime_t, 10);
        /*        读取MPU6050数据        */

    }
}