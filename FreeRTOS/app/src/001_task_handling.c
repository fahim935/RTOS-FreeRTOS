/*******************************************************************************
 * @file           001_task_handling.c
 * @brief          Brief description
 * 
 * @author         Fahim Akhtar
 * @date           04-Dec-2025
 * @time           5:06:49 PM
 * @version        1.0
 * @copyright      (c) 2025
 ******************************************************************************/

/*
 * Create two task which will print the hello work message and play with scheduling
 * policy like pre-emptive & cooperative. by changing the configUSE_PREEMPTION
 * and using taskYIELD() API.
 *
 * */


#include <001_task_handling.h>

static void myTask1(void *pData){

	while(1){
		printf("%s\n", (char *)pData);
		//taskYIELD(); // For Cooperative scheduling
	}
}

static void myTask2(void *pData){

	while(1){
		printf("%s\n", (char *)pData);
		//taskYIELD(); // For Cooperative scheduling
	}
}


void CreateHelloTasks(void){

	TaskHandle_t task1_handler;
	TaskHandle_t task2_handler;
	BaseType_t status;

	//Create task 1
	status = xTaskCreate( myTask1,"Task-1", 200,"Hello World from Task-1", 2, &task1_handler);

	//Assert if task creation failed
	configASSERT(status == pdPASS);

	//Create task 1
	status = xTaskCreate( myTask2,"Task-2", 200,"Hello World from Task-2", 2, &task2_handler);

	//Assert if task creation failed
	configASSERT(status == pdPASS);

	//start the freeRTOS scheduler
	vTaskStartScheduler();

	//If the control comes here, then the launch of the scheduler has failed due to
	//Insufficient memory in the heap
}
