/* Tha to xrisimopoiisoume gia anakateuthinsi eisodou */

#include <stdio.h>
#define N 20

main(){

    int i;
    int array[N];

    for(i=0;i<N;i++) {
        printf("Dwse ton epomeno arithmo: ");
        scanf("%d",&array[i]);
    }

    printf("\nPeriexomena pinaka: ");
    for(i=0;i<N;i++)
        printf("%d ",array[i]);
}
