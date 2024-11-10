/* fprintf.cpp Grapsimo se arxeio */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    int x=1;

    /* Anoigma arxeiou */
    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(0);
    }

    /* Grapsimo sto arxeio */
    fprintf(fp, "Mia grammi\n");
    fprintf(fp, "kai kapoioi arithmoi: %d %d %d",x,x*5,x/2);

    /* Kleisimo tou arxeiou */
    fclose(fp);

    return 0;
}
