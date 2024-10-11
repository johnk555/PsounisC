#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int i,j,M,N;
    double **p;
    
    
    printf("Dwse to plithos twn grammwn: ");
    scanf("%d", &M);
    
    printf("Dwse to plithos twn stilwn: ");
    scanf("%d", &N);
    
    p=malloc(sizeof(double*)*M);
    
    if(!p)
    {
        printf("Lathos!");
        exit(0);
    }
    
    for(i=0; i<M; i++)
    {
        p[i] = malloc(sizeof(double)*N);
        
        if(!p[i])
        {
        printf("Lathos!");
        exit(0);
        }
    }
    
    printf("To plithos twn bytes poy apaitithikan gia ti dimiourgia tou pinaka einai: %d + %d + %d = %d", 
        N*sizeof(double)*M , M*sizeof(double *) , sizeof(double **)
        ,N*sizeof(double)*M + M*sizeof(double *)+ sizeof(double **));
    
    
    for(int i=0; i<M; i++)
        free(p[i]);
    
    free(p);
    
    return 0;
}
