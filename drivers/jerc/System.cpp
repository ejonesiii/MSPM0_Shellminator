/*
 * System.cpp
 *
 *  Created on: Feb 25, 2026
 *      Author: ejjonesiii
 */

#include <ti/driverlib/driverlib.h>
#include "System.h"

unsigned long millis(){
    return DL_SYSTICK_getValue();
}

void delay(uint32_t x){
    delay_cycles(x);
}
