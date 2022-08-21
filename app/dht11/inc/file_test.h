#include <stdint.h>
typedef struct {
    uint8_t temperature ; 
    uint8_t humidity ; 
    uint8_t check_sum_valid ; 
}dht11 ; 

void read_dht11() ; 
void init_dht11() ; 