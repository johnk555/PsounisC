#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {

    int i;
    double v;

    for(i=0;i<4;i++) {
        v=i*(PI/2);
        printf("\nHmitono tou %d*PI/2=%.2f",i,sin(v));
        printf("\nSinimitono tou %d*PI/2=%.2f",i,cos(v));
        printf("\nEfaptomeni tou %d*PI/2=%.2f",i,tan(v));
        printf("\n===================");

    }
    return 0;
}
