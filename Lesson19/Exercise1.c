#include <stdio.h>
#include <math.h>

double f(double x);

int main(void) {
    double x;
    printf("Dwse x: ");
    scanf("%lf", &x);

    printf("To apotelesma einai: %lf",f(x));

    return 0;
}

double f(double x) {
    return 1 / (1 + exp(-x));
}
