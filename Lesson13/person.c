#include <stdio.h>
#include <stdlib.h>
#define SIZE 80

struct person{
    char *onoma;
    char *diefthinsi;
    char *arithmos;
    char *nomos;
};

typedef struct person RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);
void init_record(RECORD *p);
void free_record(RECORD x);
void copy_record(RECORD *A,RECORD *x);

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

void read_record(RECORD *p)
{
    printf("Pliktrologise to onoma tou atomou: ");
    scanf("%s", p->onoma);
    
    printf("Pliktrologise ti diefthinsi tou atomou: ");
    scanf("%s", p->diefthinsi);
    
    printf("Pliktrologise ton arithmo tou atomou: ");
    scanf("%s", p->arithmos);
    
    printf("Pliktrologise to nomo tou atomou: ");
    scanf("%s", p->nomos);
}

void print_record(RECORD x)
{
    printf("%s : %s %s %s\n", x.onoma, x.diefthinsi, x.arithmos, x.nomos);
    
}

void init_record(RECORD *p)
{
    p->onoma = malloc(sizeof(char)*SIZE);
    if(!p->onoma)
    {
        printf("Adynamia desmeusis mnimis");
        exit(0);
    }
    
    p->diefthinsi = malloc(sizeof(char)*SIZE);
    if(!p->diefthinsi)
    {
        printf("Adynamia desmeusis mnimis");
        exit(0);
    }
    
    p->arithmos = malloc(sizeof(char)*SIZE);
    if(!p->arithmos)
    {
        printf("Adynamia desmeusis mnimis");
        exit(0);
    }
    
    p->nomos = malloc(sizeof(char)*SIZE);
    if(!p->nomos)
    {
        printf("Adynamia desmeusis mnimis");
        exit(0);
    }
    
}

void free_record(RECORD x)
{
    free(x.onoma);
    free(x.diefthinsi);
    free(x.arithmos);
    free(x.nomos);
}

void copy_record(RECORD *A,RECORD *x)
{
    x->onoma=A->onoma;
    x->diefthinsi=A->diefthinsi;
    x->arithmos=A->arithmos;
    x->nomos=A->nomos;
    
}





