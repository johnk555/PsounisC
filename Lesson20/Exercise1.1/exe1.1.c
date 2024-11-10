#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    fp = fopen("test.txt", "w");
    if (!fp)    exit(0);


    fprintf(fp, "0123456789\n");
    fclose(fp);

    // 1.

    fp = fopen("test.txt", "a+");
    printf("pos=%ld\n",ftell(fp));

    // 2.
    fprintf(fp, "XXXX");

    // 3.
    rewind(fp);

    while (!feof(fp))
        printf("%c",fgetc(fp));


    fclose(fp);
    return 0;
}
