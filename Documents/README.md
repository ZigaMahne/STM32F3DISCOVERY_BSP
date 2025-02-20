# STM32F3DISCOVERY Discovery board

## Overview

The STM32F3DISCOVERY Discovery kit is a complete demonstration and development platform for the STMicroelectronics Arm® Cortex®-M4 core-based STM32F303VCT6 microcontroller. It includes an ST-LINK/V2 (or V2-B) embedded debug tool interface, an ST MEMS gyroscope, an ST MEMS E-compass, LEDs, push-buttons, and a USB Mini-B connector.

ST-LINK/V2 is integrated into the board, as the embedded in-circuit debugger and programmer.

## Getting started

- [User manual](https://www.st.com/resource/en/user_manual/um1570-discovery-kit-with-stm32f303vc-mcu-stmicroelectronics.pdf)

### ST-LINK driver installation and firmware upgrade (on Microsoft Windows)

1. Download the latest [ST-LINK driver](https://www.st.com/en/development-tools/stsw-link009.html).
2. Extract the archive and run `dpinst_amd64.exe`. Follow the displayed instructions.
3. Download the latest [ST-LINK firmware upgrade](https://www.st.com/en/development-tools/stsw-link007.html).
4. Extract the archive and run the `ST-LinkUpgrade.exe` program.
5. Connect the board to your PC using a USB cable and wait until the USB enumeration is completed.
6. In the **ST-Link Upgrade** program, press the **Device Connect** button.
7. When the ST-LINK driver is correctly installed, the current ST-LINK version is displayed.
8. Press the **Yes >>>>** button to start the firmware upgrade process.

## Technical reference

- [STM32F303VC microcontroller](https://www.st.com/en/microcontrollers-microprocessors/stm32f303vc.html)
- [STM32F3DISCOVERY board](https://www.st.com/en/evaluation-tools/stm32f3discovery.html)
- [User manual](https://www.st.com/resource/en/user_manual/um1570-discovery-kit-with-stm32f303vc-mcu-stmicroelectronics.pdf)
- [Data brief](https://www.st.com/resource/en/data_brief/stm32f3discovery.pdf)
- [Schematic](https://www.st.com/resource/en/schematic_pack/mb1035-f303c-c01_schematic.pdf)
