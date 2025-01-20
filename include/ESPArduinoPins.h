#pragma once

// ESP8266 Pins
// These are w/rt the Arduino usage
#define 	ESP8266_D0	16	
#define 	ESP8266_D1	5	
#define 	ESP8266_D2	4
#define		ESP8266_D3	0
#define 	ESP8266_D4	2
#define 	ESP8266_D5	14	
#define 	ESP8266_D6	12
#define 	ESP8266_D7	13
#define 	ESP8266_D8	15
#define     ESP8266_CLK 6
#define     ESP8266_SD0 7
#define     ESP8266_SD1 8
#define 	ESP8266_SD2	9
#define 	ESP8266_SD3	10
#define     ESP8266_CMD 11
#define 	ESP8266_RX	3
#define 	ESP8266_TX	1

#define     ESP8266_MOSI    ESP8266_SD1
#define     ESP8266_CS      ESP8266_CMD
#define     ESP8266_MISO    ESP8266_SD0
#define     ESP8266_SCLK    ESP8266_CLK

#define     ESP8266_SCL     ESP8266_D1
#define     ESP8266_SDA     ESP8266_D2

// ESP32 Pins
// These are w/rt to Arduino usage
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
#define ESP32_D13   13
#define ESP32_D12   12
#define ESP32_D14   14
#define ESP32_D27   27
#define ESP32_D26   26
#define ESP32_D25   25
#define ESP32_D33   33
#define ESP32_D32   32
#define ESP32_D35_INPUT_ONLY   35
#define ESP32_D34_INPUT_ONLY   34
#define ESP32_VN_INPUT_ONLY    39
#define ESP32_VP_INPUT_ONLY    36
#define ESP32_D23   23
#define ESP32_D22   22
#define ESP32_TX0   1
#define ESP32_RX0   3
#define ESP32_D21   21
#define ESP32_D19   19
#define ESP32_D18   18
#define ESP32_D5    5
#define ESP32_D4    4
#define ESP32_D2    2
#define ESP32_D15   15
#define ESP32_D17   17
#define ESP32_D16   16
#define ESP32_D0   0
#define ESP32_TX2   ESP32_D17
#define ESP32_RX2   ESP32_D16

#define ESP32_TOUCH0    ESP32_D4
#define ESP32_TOUCH2    ESP32_D2
#define ESP32_TOUCH3    ESP32_D15
#define ESP32_TOUCH4    ESP32_D13
#define ESP32_TOUCH5    ESP32_D12
#define ESP32_TOUCH6    ESP32_D14
#define ESP32_TOUCH7    ESP32_D27
#define ESP32_TOUCH8    ESP32_D33
#define ESP32_TOUCH9    ESP32_D32

#define ESP32_VSPI_MOSI ESP32_D23
#define ESP32_VSPI_MISO ESP32_D19
#define ESP32_VSPI_CLK  ESP32_D18
#define ESP32_VSPI_CS0  ESP32_D5
#define ESP32_HSPI_MOSI ESP32_D13
#define ESP32_HSPI_MISO ESP32_D12
#define ESP32_HSPI_CLK  ESP32_D14
#define ESP32_HSPI_CS0  ESP32_D15

#define ESP32_I2C_SCL   ESP32_D22
#define ESP32_I2C_SDA   ESP32_D21

#define ESP32_DAC1  ESP32_D25
#define ESP32_DAC2  ESP32_D26

#define ESP32_ADC1_CH0  ESP32_VP_INPUT_ONLY
#define ESP32_ADC1_CH3  ESP32_VN_INPUT_ONLY
#define ESP32_ADC1_CH6  ESP32_D34_INPUT_ONLY
#define ESP32_ADC1_CH7  ESP32_D35_INPUT_ONLY
#define ESP32_ADC1_CH4  ESP32_D32
#define ESP32_ADC1_CH5  ESP32_D33
#define ESP32_ADC2_CH8  ESP32_D25
#define ESP32_ADC2_CH9  ESP32_D26
#define ESP32_ADC2_CH7  ESP32_D27
#define ESP32_ADC2_CH6  ESP32_D14
#define ESP32_ADC2_CH5  ESP32_D12
#define ESP32_ADC2_CH4  ESP32_D13
#define ESP32_ADC2_CH0  ESP32_D4
#define ESP32_ADC2_CH2  ESP32_D2
#define ESP32_ADC2_CH3  ESP32_D15

#define ESP32_BUILTIN_LED ESP32_D2
#define ESP32_S2_MINI_BUILTIN_LED ESP32_D15