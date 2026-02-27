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

#ifndef SERIAL_HPP_
#define SERIAL_HPP_

#include <stdint.h>
#include <string.h>
#include "Stream.hpp"
#include "System.hpp"

#define RX_BUF_LEN 128

class Serial : public Stream{
public:
    Serial(); //TODO: Implement UART device arg
    bool begin(uint32_t baud);
    int available() override;
    int read() override;
    int peek() override;
    void flush() override;
    size_t write(uint8_t buff) override;
    size_t write(const uint8_t *buff, size_t size) override;
    size_t write(const char *str) override;
private:
    //TODO: UART_HandleTypeDef
    uint32_t baudrate = 0;
    uint8_t receive_buffer[RX_BUF_LEN];
    uint32_t receive_buffer_counter = 0;
    //TODO: static const char* dmaErrorMessage;
};



#endif /* SERIAL_HPP_ */
