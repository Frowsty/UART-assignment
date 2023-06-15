# GPIO_LED
 En applikation som kontrollerar hårdvaran av STM32411xC i syfte att kontrollera IOn via utvecklingskortets pins

 Projektet kommer att bestå utav följande struktur:
    - main.c - Huvudansvarig för applikationens användning
    - my_stm32f4_gpio_driver.h - Definitioner av beteckningar och funktioner som kommer kallas på utav drivrutinen i sig
    - my_stm32f4_uart_driver.h - Definitioner av UART beteckningar och funktioner
    - my_stm32f4_gpio_lib.h - Definitioner av hårdvaran vi behöver kommunicera med
    - my_stm32f4_gpio_lib.c - Tillämpar vi funktionalitet
    - my_stm32f4_uart_lib.h - Definitioner av UART funktioner vi behöver för att kommunicera med UART
    - my_stm32f4_uart_lib.c - Implementering av UART funktionerna vi behöver 