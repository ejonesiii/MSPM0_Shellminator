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
 * Replacement for the Arduino System library for use on the MSPM0, necessary to run the Shellminator project
 * Library assumes the use of the MSPM0 driverlib
 *
 * Written using Code Composer Studio v12.
 * No AI was used in the creation of this code.
 */

#ifndef System_h
#define System_h

#include <time.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <ti/devices/DeviceFamily.h>
#include <ti/drivers/UART.h>

unsigned long millis(void);
void delay(uint32_t x);


#if (DeviceFamily_ID == DeviceFamily_ID_MSPM0C110X)
#error This device is not supported due to DMA limitations
#elif (DeviceFamily_ID == DeviceFamily_ID_MSPM0G351X)

#else
#warning This device has not yet been implemented
#endif


#endif


