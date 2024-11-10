/* feof.c */
#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

int main(void) {
    FILE *fp;
    char c;
    int i;
    struct point data;

    fp = fopen("binarydata.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(0);
    }

    /* Diavasma apo to arxeio */
    while (!feof(fp)) {
        if(fread(&data, sizeof(struct point), 1, fp) == 1)
            printf("%d %d\n", data.x, data.y);
    }

    fclose(fp);

    return 0;
}

