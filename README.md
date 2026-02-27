## Project Summary

Drivers for the MSPM0 necessary to implement the [Shellminator](https://www.shellminator.org/index.html) project.

## Peripherals & Pin Assignments
Shellminator uses the USB-to-UART bridge interface of the TI LP-MSPM0 development boards. Below are the UART configurations on boards I've tested

#### Boards that do work
| MCU | UART TX Pin | UART RX PIN | Notes |
| --- | --- | --- | --------- |
| MSPM0G3519 | PA10 | PA11 | N/A |

#### Boards that don't work
| MCU | Notes |
| --- | ---------|
| MSPM0C1103 | Has only one DMA channel (need two)|
| MSPM0C1104 | Has only one DMA channel (need two)|


## Installation
TODO: Show how to install (TODO: Make it work first, dummy)

## License
Serial.cpp, Serial.h, System.cpp, and System.h are licensed under the MIT License. See the license file for details.

Print.cpp, Print.h, Printable.h, Stream.cpp, and Stream.h are included in this project and are the works of David A. Mellis and Adrian McEwen licensed LGPL 2.1 (or later). The license information for these files are included at the top of the files.

main.c is copyright of Texas Instruments. See the top of the file for more information
