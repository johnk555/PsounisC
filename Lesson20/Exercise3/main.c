#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define SIZE 80

struct record {
    char name[SIZE];
    char surname[SIZE];
    int age;
    int grade;
};

int open(char *filename, FILE **fp, int *num);
int close(FILE **fp);
int add(FILE *fp);
int read(FILE *fp,int num,int rec,struct record *eggrafi);
void print(struct record record);
void print_all(FILE *fp, int num);
int modify(FILE *fp,int num,int rec);

main(void) {
    FILE *fp;
    int choice, check;
    char filename[]="data.dat";
    int N;
    int i;
    struct record record;

    while(1) {
        printf("\nMenu:");
        printf("\n-----------");
        printf("\n1-Anoigma");
        printf("\n2-Kleisimo");
        printf("\n3-Prosthiki eggrafis");
        printf("\n4-Diavasma eggrafis");
        printf("\n5-Ektypwsi olwn");
        printf("\n6-Modify");
        printf("\n7-Eksodos");
        printf("\n-----------");
        printf("\nEpilogi?");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                check = open(filename, &fp, &N);
                if(check == TRUE)
                    printf("To arxeio anoikse!");
                else {
                    printf("Error!");
                    exit(0);
                }
                break;
            case 2:
                check=close(&fp);
                if(check == TRUE)
                    printf("To arxeio ekleise!");
                else {
                    printf("Error!");
                    exit(0);
                }
                break;
            case 3:
                check = add(fp);
                if(check == TRUE) {
                    printf("H eggrafi prostethike!");
                    N++;
                }
                else {
                    printf("Error!");
                    exit(0);
                }
                break;
            case 4:
                printf("Yparxoyn %d eggrafes, poia theleis na ektypwsw? ", N);
                scanf("%d",&i);
                check=read(fp,N,i,&record);
                if(check == FALSE) {
                    printf("Error!");
                    exit(0);
                }
                printf("H eggrafi %d einai: ",i);
                print(record);
                break;
            case 5:
                printf("Ektypwsi olwn twn eggrafwn:");
                print_all(fp,N);
                break;
            case 6:
                printf("Poia eggrafi theleis na tropopoisis? ");
                scanf("%d",&choice);
                check = modify(fp,N,choice);
                if(check == FALSE) {
                    printf("Error!");
                    continue;
                }
                break;
            case 7:
                printf("\nBye bye!");
                exit(0);
            default:
                printf("Lathos epilogi");
        }
    }
}

int open(char *filename, FILE **fp, int *num) {
    struct record temp;
    (*fp) = fopen(filename, "rb");
    if ((*fp)==NULL)                   // To arxeio den yparxei
    {
        (*fp) = fopen(filename, "wb+");
        if (!(*fp)) {
            printf("Error opening file!\n");
            return FALSE;
        }
        *num=0;
        return TRUE;
    }
    else       // To arxeio yparxei
    {
        fclose(*fp);
        (*fp) = fopen(filename, "rb+");
        if ((*fp)==NULL) {
            printf("Error opening file!\n");
            return FALSE;
        }
        (*num)=0;
        while(fread(&temp, sizeof(struct record), 1, (*fp))==1)
            (*num)++;

        return TRUE;
    }
}
int close(FILE **fp) {

    if(fclose(*fp)==0)
        return TRUE;
    else
        return FALSE;
}
int add(FILE *fp) {
    struct record new_record;

    printf("Enter name: ");
    scanf("%s", new_record.name);

    printf("Enter surname: ");
    scanf("%s", new_record.surname);

    printf("Enter age: ");
    scanf("%d", &new_record.age);

    printf("Enter grade: ");
    scanf("%d", &new_record.grade);

    fseek(fp, 0, SEEK_END);

    if(fwrite(&new_record, sizeof(struct record), 1, fp) == 1)
        return TRUE;
    else
        return FALSE;
}

int read(FILE *fp,int num,int rec,struct record *eggrafi)
 {
    if (rec>=0 && rec<=num -1) {
        fseek(fp, rec*sizeof(struct record), SEEK_SET);

        if (fread(eggrafi, sizeof(struct record), 1, fp)==1)
            return TRUE;
        else
            return FALSE;
    }
    else
        return FALSE;
}
void print(struct record record) {
    printf("\n\nOnoma: %s\nEponimo: %s\nAge: %d\nGrade: %d\n",record.name,record.surname,record.age,record.grade);
}

void print_all(FILE *fp, int num) {
    int i;
    struct record temp;

    fseek(fp, 0, SEEK_SET);

    for (i=0; i<num; i++) {
        read(fp,num,i,&temp);
        printf("\nEggrafi %d", i);
        print(temp);
    }
}

int modify(FILE *fp,int num,int rec) {
    struct record temp;

    if (rec>=0 && rec<=num-1) {
        printf("Enter name: ");
        scanf("%s", temp.name);

        printf("Enter surname: ");
        scanf("%s", temp.surname);

        printf("Enter age: ");
        scanf("%d", &temp.age);

        printf("Enter grade: ");
        scanf("%d", &temp.grade);

        printf("\n\nOnoma: %s\nEponimo: %s\nAge: %d\nGrade: %d\n",temp.name,temp.surname,temp.age,temp.grade);

        rewind(fp);
        fseek(fp, rec*sizeof(struct record), SEEK_SET);
        fwrite(&temp, sizeof(struct record), 1, fp);
        return TRUE;
    }
    else
        return FALSE;

}
