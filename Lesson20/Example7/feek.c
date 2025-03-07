/* ftell.c */
#include <stdio.h>
#include <stdlib.h>

#define N 10

struct point {
    int x;
    int y;
};

int main(void) {
    FILE *fp;
    int i;
    struct point data;

    fp = fopen("binarydata.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(0);
    }

    printf("Dwse simeio(0-9)");

    scanf("%d", &i);
    fseek(fp, sizeof(struct point)*i, SEEK_SET);
    fread(&data, sizeof(struct point), 1, fp);

    printf("Simeio %d:", i);
    printf("%d %d\n", data.x, data.y);

    fclose(fp);

    return 0;
}

