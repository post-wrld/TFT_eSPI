// Setup for the ESP32 S3 with ILI9341 display
// Note SPI DMA with ESP32 S3 is not currently supported
#define USER_SETUP_ID 70
// See SetupX_Template.h for all options available
#define ILI9341_DRIVER
//#define ILI9341_2_DRIVER

                    // Typical board default pins - change to match your board

                    #define TFT_CS   10       // change to 10 if your board uses CS -> pin 10
                    #define TFT_RST  3
                    #define TFT_DC   9
                    #define TFT_MOSI 11
                    #define TFT_SCLK 13 //     12 or 36 (FSPI CLK) touch share spi
                    #define TFT_MISO 12


//#define TOUCH_CS -1 // Optional for touch screen
#define TOUCH_IRQ  28
#define TOUCH_CS 4 // Optional for touch screen
//#define XPT2046_TOUCH // ADD THIS LINE to enable the driver
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#define SMOOTH_FONT
#define UTF8_DECODE
// FSPI (or VSPI) port (SPI2) used unless following defined. HSPI port is (SPI3) on S3.
#define USE_HSPI_PORT

//#define SPI_FREQUENCY  27000000
#define SPI_FREQUENCY 80000000   // Maximum for ILI9341

#define SPI_READ_FREQUENCY  6000000 // 6 MHz is the maximum SPI read speed for the ST7789V

#define SPI_TOUCH_FREQUENCY 2500000
