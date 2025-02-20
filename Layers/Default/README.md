# Board: STMicroelectronics [STM32F3DISCOVERY](https://www.st.com/en/evaluation-tools/stm32f3discovery.html)

## Default Board Layer

Device: **STM32F303VCTx**

System Core Clock: **72 MHz**

This setup is configured using **STM32CubeMX**, an interactive tool provided by STMicroelectronics for device configuration.
Refer to ["Configure STM32 Devices with CubeMX"](https://open-cmsis-pack.github.io/cmsis-toolbox/CubeMX/) for additional information.

### System Configuration

| System resource       | Setting
|:----------------------|:--------------------------------------
| Heap                  |  8 kB (configured in the STM32CubeMX)
| Stack (MSP)           |  1 kB (configured in the STM32CubeMX)

### STDIO mapping

**STDIO** is routed to Virtual COM port on the ST-LINK (using **USART1** peripheral)

### CMSIS-Driver mapping

| CMSIS-Driver          | Peripheral            | Board connector/component                     | Connection
|:----------------------|:----------------------|:----------------------------------------------|:------------------------------
| Driver_USART1         | USART1                | ST-LINK connector (CN1)                       | STDIN, STDOUT, STDERR
| Driver_USBD0          | USB_FS                | USB Type-C connector (CN2)                    | CMSIS_USB_Device
| CMSIS-Driver VIO      | GPIO                  | LEDs (LD3 - LD 10) and USER button (B1)       | CMSIS_VIO

### CMSIS-Driver Virtual I/O mapping

| CMSIS-Driver VIO      | Board component
|:----------------------|:--------------------------------------
| vioBUTTON0            | USER button (B1)
| vioLED0               | LED red     (LD3)
| vioLED1               | LED green   (LD6)
| vioLED2               | LED blue    (LD4)
| vioLED3               | LED orange  (LD5)
| vioLED4               | LED green   (LD7)
| vioLED5               | LED orange  (LD8)
| vioLED6               | LED blue    (LD9)
| vioLED7               | LED red     (LD10)

> **Note:**  Layer has been created with Firmware Package STM32Cube_FW_F3_V1.11.5.
