#include <stdio.h>
#include <time.h>

int main(void) {
    
    clock_t t;
    t = clock();

    printf("Kikloi: %ld\n", t);

    printf("Kikloi ana deyterolepto: %ld\n", CLOCKS_PER_SEC);

    printf("Xronos apo tin enarksi: %f", (float)t/CLOCKS_PER_SEC);

    return 0;
}
