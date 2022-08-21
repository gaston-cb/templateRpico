/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "file_test.h"

int main() {
    init_dht11() ; 
   
    while (1) {
        read_dht11() ; 
    }
}
