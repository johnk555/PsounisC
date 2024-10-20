#include <stdio.h>
#include <string.h>
#define N 80

int main() {
    char str[N], ch;
    char *ptr;
    int pos;

    /* eisodos */
    printf("Dwse ti sumboloseira: ");
    gets(str);

    /* anazitisi me tin strcspn */
    pos = strcspn(str,"abc");

    if (pos != strlen(str))
        printf("Apo ti thesi %d: %s", pos, &str[pos]);
    else
        printf("Den vrethikan oi xaraktires abc stin %s", str);

    return 0;
}
