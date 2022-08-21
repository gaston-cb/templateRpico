
#include "file_test.h"
#include <stdio.h>
#include "pico/stdlib.h"
uint8_t number_port_connected_dht11 ; 

const uint LED_PIN = PICO_DEFAULT_LED_PIN;
void init_dht11(){ 
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
}


void read_dht11(void){
    printf("on led \r\n") ; 
    gpio_put(LED_PIN, 1);
    sleep_ms(250);
    printf("led_off \r\n") ; 
    gpio_put(LED_PIN, 0);
    sleep_ms(250);
}


