#include <stdio.h>
#include <string.h>
#define N 80

int main() {
    int i,res;
    char str[N], *p;

    /* eisodos */
    printf("Dwse ti sumboloseira: ");
    gets(str);

    /* xwrismos me tin strtok */
    p = strtok(str," ,.");

    /* eksodos */

    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ,.");
    }

    return 0;
}
