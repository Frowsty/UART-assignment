#include	"my_stm32f4_gpio_lib.h"
#include	"my_stm32f4_uart_lib.h"

GPIO_InitTypeDef			myGPIO_InitSruct;
UART_TypeDef				  myUART_InitStruct;

int main(void)
{	
	myGPIO_InitSruct.Mode 		= GPIO_MODE_OUTPUT_PP;
	myGPIO_InitSruct.Pin  		= GPIO_PIN_5;
	myGPIO_InitSruct.Pull		  = GPIO_NOPULL;

	__LIB_RCC_GPIOA_CLK_ENABLE();
	LIB_GPIO_Init(GPIOA, &myGPIO_InitSruct);

	UART2_init(GPIOB); // initialize UART2 on port GPIOB
	UART2_enable(&myUART_InitStruct, 1); // configure and enable UART2

	while(1)
	{
		for(int i = 0; i < 900000; i++){}
		LIB_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
	}

	UART2_disable(&myUART_InitStruct); // reset configuration and disable UART2
}
