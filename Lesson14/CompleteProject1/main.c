#include <stdio.h>
#include <stdlib.h>
#include "lib_array.h"

#define N 50


int main(void) {
    int pin[N];
    init_array(pin,N,1,100);

    print_array(pin,N);

    printf("\n\nTo athroisma einai: %d\n\n", sum_array(pin,N));

    return 0;
}
