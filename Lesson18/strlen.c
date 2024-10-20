#include <stdio.h>
#include <string.h>

#define N 80

int main() {

    char str[N];

    /* eisodos */

    printf("Enter a string: ");
    gets(str);

    /* eksodos */
    printf("Mikos=%d", strlen(str));

    return 0;
}

