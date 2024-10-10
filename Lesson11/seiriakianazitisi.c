#include <stdio.h>
#define N 5

int main(void)
{
    int i;
    int A[N] = {5, 3, 4, 4, 8};
    int x=2;
    
    
    for(i=0; i<N; i++)
    {
        if(A[i]==x)
            break;
    }
    
    if(i<N)
        printf("\nVrethike to stoixeio sti thesi: %d",x,i);
    else
        printf("\nDen vrethike to stoixeio");
    
    
    return 0;
}
