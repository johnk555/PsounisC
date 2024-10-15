#include <stdio.h>
#include <stdlib.h>

void print_array(int *pinakas, int n);
void insertion_sort(int *pinakas, int n);
void swap(int *a, int *b);

int main(int argc, char *argv[]) {

    int *array;
    int N = argc-1;


    array = malloc(sizeof(int)*N);

    if(!array) {
        printf("Adynamia desmeusis mnimis!");
        exit(0);
    }

    for(int i=0; i < N; i++) {
        array[i] = atoi(argv[i+1]);
    }
    printf("Arxikos pinakas: ");
    print_array(array, N);

    insertion_sort(array, N);
    printf("Taksinomimenos pinakas: ");
    print_array(array, N);



    return 0;
}
void print_array(int *pinakas, int n) {
    int i;

    printf("[");
    for(i = 0; i < n-1; i++)
        printf("%2d,", pinakas[i]);
    printf("%2d]\n", pinakas[n-1]);
}
void insertion_sort(int *pinakas, int n) {
    int i, j;

    for(i = 1; i < n; i++) {
        for(j=i; j>=1; j--) {
            if(pinakas[j] < pinakas[j-1])
                swap(&pinakas[j], &pinakas[j-1]);
            else
                break;
        }
    }
}

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
