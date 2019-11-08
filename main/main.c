#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"

void app_main(void)
{
	char* rng;
	while(true)
	{
		rng = (char*)0x3ff75144;
		for(int i = 0; i < 32; i++) printf("%c", *rng+i);
		printf("\n");
        	vTaskDelay(300 / portTICK_PERIOD_MS);
	}
}
