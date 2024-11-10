#include <stdio.h>
#include <stdlib.h>
#define N 100

struct point {
    int x;
    int y;
};

int main(void) {
    FILE *fp;
    int i;
    int n; //Plithos eggrafwn
    struct point points[N];

    fp = fopen("points.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        exit(0);
    }

    fscanf(fp, "%d", &n);
    for (i = 0; i < n; i++)
        fscanf(fp, "%d%d", &points[i].x, &points[i].y);

    fclose(fp);

    /* Ektypwsi stin othoni */
    for (i = 0; i < n; i++)
        printf("%d %d\n", points[i].x, points[i].y);

    return 0;
}
