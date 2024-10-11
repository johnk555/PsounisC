#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main()
{
    int N,i,j;
    int st_array[SIZE][SIZE];   
    
    srand(time(0)); 
     
    do{
        printf("Dwse Ν: ");
        scanf("%d", &N);
      
        if(N<5 || N>20)
            printf("LAthos eisodos\n");
    }while(N<5 || N>20);
    
    for(i=0; i<N; i++)
    {
        for(j=0; j<=i; j++)
            st_array[i][j] = 1 + rand() % 9;
            
        for(j=i+1; j<N; j++)
            st_array[i][j] = 0;
    }
    
    printf("Statikos pinakas: \n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
            printf("%d ", st_array[i][j]);
        printf("\n");
    }
    
    //Dynamic Array
    
    int **dyn_array;
    
    dyn_array = malloc(sizeof(int *)*N);
    if(!dyn_array)
    {
        printf("Adynamia desmeusis mnimis");
        exit(0);
    }
    
    for(i=0; i<N; i++)
    {
        dyn_array[i] = malloc(sizeof(int)*(i+1));
        if(!dyn_array[i])
        {
            printf("Adynamia desmeusis mnimis");
            exit(0);
        }
    }
    for(i=0; i<N; i++)
    {
        for(j=0; j<=i; j++)
            dyn_array[i][j] = 1 + rand() % 9;
            
    }
    
    printf("\nDynamikos pinakas: \n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
            printf("%d ", dyn_array[i][j]);
        printf("\n");
    }
    
    for(i=0; i<N; i++)
        free(dyn_array[i]);
    free(dyn_array);
    
    

    return 0;
}
