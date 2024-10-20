#include <stdio.h>
#include <string.h>
#define N 80

int main() {
    int i,res;
    char str[N], ch;
    char *ptr;

    /* eisodos */
    printf("Dwse ti sumboloseira: ");
    gets(str);
    printf("Dwse to xaraktira: ");
    ch=getchar();

    /* anazitisi me tin strchr */
    ptr = strchr(str,ch);
    while (ptr != NULL) {
        puts(ptr);
        ptr = strchr(ptr+1,ch);
    }

    return 0;
}
