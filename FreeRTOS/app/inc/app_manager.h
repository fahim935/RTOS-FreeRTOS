/*******************************************************************************
 * @file           app_manager.h
 * @brief          Application feature manager for FreeRTOS demos
 * 
 * @author         Fahim Akhtar
 * @date           04-Dec-2025
 * @time           4:37:39 PM
 * @version        1.0
 * @copyright      (c) 2025
 ******************************************************************************/


/*
 * This header defines the interface and feature selection mechanism for running
 * various demo applications on STM32 microcontrollers. Each feature corresponds
 * to a specific functional test case—such as creating a task/queue/semaphore etc .
 *
 * The macro `FEATURE_SELECTED` determines which demo is executed at runtime,
 * enabling modular testing without altering core logic. This approach supports
 * rapid prototyping, debugging, and proof-of-functionality work-flows.
 *
 * */

#ifndef INC_APP_MANAGER_H_
#define INC_APP_MANAGER_H_

// Include headers for individual feature modules
#include <001_task_handling.h>


#define FreeRTOS_TASK_CREATION                      1

// Select the active feature to run
#define FEATURE_SELECTED        		FreeRTOS_TASK_CREATION


/**
 * @brief Executes the selected application feature based on FEATURE_SELECTED macro.
 *
 * This function acts as the entry point for running one of the predefined demo
 * applications. It uses the value of `FEATURE_SELECTED` to dispatch control to
 * the corresponding feature implementation. This modular design simplifies testing
 * and validation of individual drivers and application logic.
 *
 * Typical use case:
 * - Set FEATURE_SELECTED to desired macro (e.g., STM32_SPI2_MASTER_SLAVE_COMM)
 * - Compile and flash the firmware
 * - Observe behavior via serial output, LED toggling, or logic analyzer
 */
void AppManager_Run(void);

#endif /* INC_APP_MANAGER_H__ */
