#include <stdio.h>
#include <time.h>
#define N 1000000000

int main(void) {
    clock_t c1,c2;

    long i;

    c1=clock();

    for(i=1;i<=N;++i);

    c2=clock();

    printf("Me time: Arxi=%ld, Telos=%ld, Xronos=%.3f", c1, c2,(double)(c2-c1)/CLOCKS_PER_SEC);

    return 0;
}
