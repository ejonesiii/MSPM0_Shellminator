/*
 * System.h
 *
 *  Created on: Feb 25, 2026
 *      Author: ejjonesiii
 */

#ifndef System_h
#define System_h

#include <time.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

unsigned long millis(void);
void delay(uint32_t x);

#if defined(DeviceFamily_MSPM0C110X)

#elif defined(DeviceFamily_MSPM0G351X)

#endif


#endif


