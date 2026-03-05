/*
MIT License

Copyright (c) 2026 Evan Joshua Jones III

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/*
 * Author: Evan Jones III
 * Initial Commit: 2/25/2026
 * Last Commit: 2/26/2026
 *
 * Replacement for the Arduino Serial library for use on the MSPM0, necessary to run the Shellminator project
 * Library assumes the use of the MSPM0 driverlib
 *
 * Written using Code Composer Studio v12.
 * No AI was used in the creation of this code.
 */

#include "Serial.hpp"
#include "System.h"
#include <stdint.h>
#include <ti/drivers/uart/UARTMSPM0.h>
#include <ti/drivers/UART.h>

// Default settings
static UARTMSP_HWAttrs defaultSettings = {
   .regs          = DEFAULT_UART,
   .irq           = DEFAULT_IRQ,
   .rxPin         = DEFAULT_RXD,
   .rxPinFunction = DEFAULT_RXD_FUNC,
   .txPin         = DEFAULT_TXD,
   .txPinFunction = DEFAULT_TXD_FUNC,
   .mode          = DL_UART_MODE_NORMAL,
   .direction     = DL_UART_DIRECTION_TX_RX,
   .flowControl   = DL_UART_FLOW_CONTROL_NONE,
   .clockSource   = DL_UART_CLOCK_BUSCLK,
   .clockDivider  = DL_UART_CLOCK_DIVIDE_RATIO_1,
   .rxIntFifoThr  = DL_UART_RX_FIFO_LEVEL_ONE_ENTRY,
   .txIntFifoThr  = DL_UART_TX_FIFO_LEVEL_EMPTY,
};


// Placeholders because I don't know how to get rid of them in an elegant way
uint8_t rxBuf[1];
uint8_t txBuf[1];

UART_Data_Object UARTObject = {
    .object =
        {
            .supportFxns        = &UARTMSPSupportFxns,
            .buffersSupported   = true,
            .eventsSupported    = false,
            .callbacksSupported = false,
            .dmaSupported       = true,
        },
    .buffersObject = // Placeholder default values
        {
            .rxBufPtr  = rxBuf,
            .txBufPtr  = txBuf,
            .rxBufSize = sizeof(rxBuf),
            .txBufSize = sizeof(txBuf),
        },
};


// Serial class functions
Serial::Serial(UART_Handle *handle){
    uart_device = handle;
}

bool Serial::begin(uint32_t baud){
    if(uart_device == NULL){        // Check to see if Serial class has been initialized
        return false;
    }



    return true;
}

int Serial::available(){

    return 0;
}

int Serial::read(){

    return 0;
}

int Serial::peek(){

    return 0;
}

void Serial::flush(){

}

size_t Serial::write(uint8_t buff){

    return 0;
}

size_t Serial::write(const uint8_t *buff,size_t size){

    return 0;
}

size_t Serial::write(const char *str){

    return 0;
}

