#include <stdio.h>
#include <stdlib.h>
#include "record.h"
#define SIZE 80



int main()
{
    RECORD x;
    RECORD *pinakas;
    int i,N;
    int choice;

    printf("Dwse ton arithmo ton eggrafon: ");
    scanf("%d",&N);

    pinakas=malloc(sizeof(RECORD)*N);

    if(!pinakas)
    {
        printf("Adynamia desmeusis mnimis!");
        exit(0);
    }

    for(i=0; i<N; i++)
        init_record(&pinakas[i]);
    init_record(&x);

    for(i=0; i<N; i++)
    {
        printf("Gia to atomo %d: ",i+1);
        read_record(&pinakas[i]);
    }

    printf("Apo poio atomo na antigrafoun ta stoixeia tou");
    scanf("%d",&choice);

    copy_record(&pinakas[choice-1],&x);

    print_record(x);

    for(i=0; i<N; i++)
        print_record(pinakas[i]);

    for(i=0; i<N; i++)
        free_record(pinakas[i]);


    free_record(x);
    free(pinakas);

	return 0;
}


