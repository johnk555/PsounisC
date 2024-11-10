#include <stdio.h>
#include <math.h>

int main(void) {
    double x,r;
    int y;

    for(x=0; x<15; x+=0.5) {
        r=frexp(x,&y);
        printf("\n %.2f = %.2f * 2^%d",x,r,y);
    }

    return 0;
}
