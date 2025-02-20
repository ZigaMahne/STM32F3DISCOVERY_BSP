/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 17/02/2025 08:50:09
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                 1

/* Filter Settings */
#define MX_I2C1_ANF_ENABLE                      1
#define MX_I2C1_DNF                             0

/* Peripheral Clock Frequency */
#define MX_I2C1_PERIPH_CLOCK_FREQ               8000000

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                         PB6
#define MX_I2C1_SCL_GPIO_Pin                    GPIO_PIN_6
#define MX_I2C1_SCL_GPIOx                       GPIOB
#define MX_I2C1_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C1_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_HIGH
#define MX_I2C1_SCL_GPIO_AF                     GPIO_AF4_I2C1

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                         PB7
#define MX_I2C1_SDA_GPIO_Pin                    GPIO_PIN_7
#define MX_I2C1_SDA_GPIOx                       GPIOB
#define MX_I2C1_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C1_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_HIGH
#define MX_I2C1_SDA_GPIO_AF                     GPIO_AF4_I2C1

/*------------------------------ SPI1           -----------------------------*/
#define MX_SPI1                                 1

/* Peripheral Clock Frequency */
#define MX_SPI1_PERIPH_CLOCK_FREQ               72000000

/* Pins */

/* SPI1_MISO */
#define MX_SPI1_MISO_Pin                        PA6
#define MX_SPI1_MISO_GPIO_Pin                   GPIO_PIN_6
#define MX_SPI1_MISO_GPIOx                      GPIOA
#define MX_SPI1_MISO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_SPI1_MISO_GPIO_AF                    GPIO_AF5_SPI1

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                        PA7
#define MX_SPI1_MOSI_GPIO_Pin                   GPIO_PIN_7
#define MX_SPI1_MOSI_GPIOx                      GPIOA
#define MX_SPI1_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_SPI1_MOSI_GPIO_AF                    GPIO_AF5_SPI1

/* SPI1_SCK */
#define MX_SPI1_SCK_Pin                         PA5
#define MX_SPI1_SCK_GPIO_Pin                    GPIO_PIN_5
#define MX_SPI1_SCK_GPIOx                       GPIOA
#define MX_SPI1_SCK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI1_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_HIGH
#define MX_SPI1_SCK_GPIO_AF                     GPIO_AF5_SPI1

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                               1

/* Virtual mode */
#define MX_USART1_VM                            VM_ASYNC
#define MX_USART1_VM_ASYNC                      1

/* Pins */

/* USART1_RX */
#define MX_USART1_RX_Pin                        PC5
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_5
#define MX_USART1_RX_GPIOx                      GPIOC
#define MX_USART1_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_USART1_RX_GPIO_AF                    GPIO_AF7_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                        PC4
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_4
#define MX_USART1_TX_GPIOx                      GPIOC
#define MX_USART1_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_USART1_TX_GPIO_AF                    GPIO_AF7_USART1

/*------------------------------ USB            -----------------------------*/
#define MX_USB                                  1

/* Handle */
#define MX_USB_HANDLE                           hpcd_USB_FS

/* Pins */

/* USB_DM */
#define MX_USB_DM_Pin                           PA11
#define MX_USB_DM_GPIO_Pin                      GPIO_PIN_11
#define MX_USB_DM_GPIOx                         GPIOA
#define MX_USB_DM_GPIO_Mode                     GPIO_MODE_AF_PP
#define MX_USB_DM_GPIO_PuPd                     GPIO_NOPULL
#define MX_USB_DM_GPIO_Speed                    GPIO_SPEED_FREQ_HIGH
#define MX_USB_DM_GPIO_AF                       GPIO_AF14_USB

/* USB_DP */
#define MX_USB_DP_Pin                           PA12
#define MX_USB_DP_GPIO_Pin                      GPIO_PIN_12
#define MX_USB_DP_GPIOx                         GPIOA
#define MX_USB_DP_GPIO_Mode                     GPIO_MODE_AF_PP
#define MX_USB_DP_GPIO_PuPd                     GPIO_NOPULL
#define MX_USB_DP_GPIO_Speed                    GPIO_SPEED_FREQ_HIGH
#define MX_USB_DP_GPIO_AF                       GPIO_AF14_USB

#endif  /* MX_DEVICE_H__ */
