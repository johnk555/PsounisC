#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *p;
    int i,N;
    
    printf("Dwse ti diastasi tou pinaka: ");
    scanf("%d",&N);
    
    p=malloc(sizeof(int)*N);
    
    if(!p)
    {
        printf("Adynamia desmeusis mnimis");
        exit(0);
    }
    
    for(i=0; i<N; i++)
    {
        p[i]=i*i*i;
        printf("\np[%d]=%d",i,p[i]);
    }
    
    free(p);
    
    
    return 0;
}




