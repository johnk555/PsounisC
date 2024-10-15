#include <stdio.h>
#include <stdlib.h>

main(int argc, char *argv[]) {

    int i;

    printf("argc = %d",argc);

    for(i=0;i<argc;i++)
        printf("\nargv[%d] = %s",i,argv[i]);


}
