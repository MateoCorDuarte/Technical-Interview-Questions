/*
In the MBED API, you can either let the SPI class handle the Chip Select (CS) pin automatically or use a DigitalOut object to control it manually. The HAL library doesn't automatically manage the CS pin in the same way, so the standard approach is to use a separate GPIO pin and toggle it yourself before and after the SPI transfer.

Here's how the manual CS control from the MBED example translates to the STM32 HAL.

1. Pin Configuration in STM32CubeIDE
First, you need to configure the pins in STM32CubeIDE.

SPI Pins: For the Nucleo-F401RE, the pins you specified are part of the SPI1 peripheral.

PA_5 -> SPI1_SCK

PA_6 -> SPI1_MISO

PA_7 -> SPI1_MOSI

Enable the SPI1 peripheral in Full-Duplex Master mode and configure the clock settings (e.g., CPOL, CPHA, prescaler).

CS Pin: The CS pin, PB_6, must be configured as a GPIO Output pin.

In the Pinout & Configuration view, find PB_6 and set it to GPIO_Output.

You can label the pin for clarity, for example, SPI_CS_PIN.

This configuration step is crucial as it generates the necessary code to initialize both the SPI peripheral and the GPIO pin for the CS signal.
*/
#include "main.h"
#include <stdio.h>
void spi_transfer_byte(uint8_t data){
	// 1. Assert the Chip Select line (pull it low)
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET);

	// 2. Perform the SPI transfer
	// Transmit a single byte in blocking mode
	HAL_SPI_Transmit(&hspi1, &data, 1, HAL_MAX_DELAY);

	// 3. De-assert the Chip Select line (pull it high)
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET);
}
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_SPI1_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	  spi_transfer_byte(0xAA);
	  HAL_Delay(500);
  }
  /* USER CODE END 3 */
}
