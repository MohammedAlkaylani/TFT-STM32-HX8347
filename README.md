# TFT-STM32-HX8347

# TFT generation
This code support many TFTs generation 
S6D0139 +280 bytes
S6D0154 +320 bytes
SSD1289,SSD1297 (ID=0x9797) +626 bytes, 0.03s
R61580 Untested
only works with 16BIT bus anyway
LGDP4532 +120 bytes.  thanks Leodino
LGDP4535 +180 bytes
RM68140 +52 bytes defaults to PIXFMT=0x55
ST7781 +172 bytes
UC8230 +118 bytes
HX8347-D, HX8347-G, HX8347-I, HX8367-A +520 bytes, 0.27s
HX8347-A +500 bytes, 0.27s
HX8352A +486 bytes, 0.27s
HX8352B
monster 34 byte
ILI9225-B, ILI9225-G ID=0x9225, ID=0x9226, ID=0x6813 +380 bytes
ILI9326, SPFD5420 +246 bytes
costs +114 bytes
UNTESTED
costs +230 bytes, 0.03s / 0.19s
R61509, ST7793 +244 bytes
costs about 103 bytes, 0.08s

# main.c
in main code
'''
  /* USER CODE BEGIN Includes */
  #include <stdio.h>
  #include "tft.h"
  #include "functions.h"
  /* USER CODE END Includes */
  
  /* USER CODE BEGIN 0 */
  uint16_t ID=0;
  
  /* USER CODE END 0 */
  
  /* USER CODE BEGIN 2 */
    HAL_TIM_Base_Start(&htim4);
    ID=readID();
    HAL_Delay(100);
    tft_init (ID);
    setRotation(0);
    fillScreen(BLACK);
    testFillScreen();
    testLines(CYAN);
    testFastLines(RED, BLUE);
    testFilledCircles(10, MAGENTA);
    testCircles(10, BLACK);
    setRotation(0);
    printnewtstr(100, RED, &mono12x7bold, 1, (uint8_t *)"Hello world");
    scrollup(100);
    invertDisplay(1);
    fillScreen(BLACK);
    /* USER CODE END 2 */
  
    /* USER CODE BEGIN WHILE */
    while (1)
    {
      /* USER CODE END WHILE */
  
      /* USER CODE BEGIN 3 */
  	printnewtstr(100, RED, &mono12x7bold, 1, (uint8_t *)"Good Bye");
  	scrollup(100);
  	HAL_Delay(100);
    }
    /* USER CODE END 3 */
  }

'''
