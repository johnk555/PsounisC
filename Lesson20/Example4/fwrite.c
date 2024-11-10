// Dimiourgia diadikou arxeiou
#include <stdio.h>
#include <stdlib.h>

#define N 10

struct point {
    int x;
    int y;
};

int main(void) {
    FILE *fp;
    char c;
    int i;
    struct point data[N];

    fp = fopen("binarydata.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(0);
    }

    /* Tyxaia arxikopoiisi */
    for (i = 0; i < N; i++) {
        data[i].x = rand()%100;
        data[i].y = rand()%100;
    }

    /* Grapsimo sto arxeio */
    fwrite(data, sizeof(struct point), N, fp);

    fclose(fp);

    return 0;
}

