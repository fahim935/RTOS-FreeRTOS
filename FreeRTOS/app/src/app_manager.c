/*******************************************************************************
 * @file           app_manager.c
 * @brief          Implements the application manager responsible for executing
 *                 the selected feature demo from the available FreeRTOS
 *                 test applications.
 * 
 * @author         Fahim Akhtar
 * @date           04-Dec-2025
 * @time           4:37:59 PM
 * @version        1.0
 * @copyright      (c) 2025
 ******************************************************************************/

#include "app_manager.h"


/**
 * @brief Entry point for executing the selected FreeRTOS demo App.
 *
 * Based on the value of the `FEATURE_SELECTED` macro, this function calls the
 * corresponding feature implementation. If no valid feature is selected, it
 * prints a fallback message to indicate misconfiguration.
 *
 * This function is typically invoked from `main()` after system initialization.
 */

void AppManager_Run(void)
{

#if(FEATURE_SELECTED == FreeRTOS_TASK_CREATION)
    CreateHelloTasks();
#else
    printf("FreeRTOS : No valid feature selected\n");
#endif

}
