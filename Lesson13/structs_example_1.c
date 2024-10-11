#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

struct person{
    char name[80];
    char surname[80];
    struct date gennisi;
};

int main(void)
{
    struct person p;
    
    printf("Dwse onoma: ");
    scanf("%s", p.name);
    
    printf("Dwse eponimo: ");
    scanf("%s", p.surname);
    
    printf("Dwse imera gennisis: ");
    scanf("%d", &p.gennisi.day);
    
    printf("Dwse mina gennisis: ");
    scanf("%d", &p.gennisi.month);
    
    printf("Dwse etos gennisis: ");
    scanf("%d", &p.gennisi.year);
    
    printf("\n%s %s (%d/%d/%d)",p.name,p.surname,p.gennisi.day,p.gennisi.month,p.gennisi.year);
    
    
    
    
    return 0;
}
