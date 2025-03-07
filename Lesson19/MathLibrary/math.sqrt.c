#include <stdio.h>
#include <math.h>

int main(void) {
    double x=2.0;
    double y,r;

    r=sqrt(x);
    printf("sqrt(%.2f) = %.2f",x,r);

    for (y=1; y<10; y+=1.0) {
        r=pow(x,1/y);
        printf("\n %.2f^(1/%.2f) = %.2f",x,y,r);
    }
    return 0;
}
