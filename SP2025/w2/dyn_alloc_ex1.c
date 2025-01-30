#include<stdio.h>
#include<stdlib.h>

int main() {

    int* p;
    p = NULL;
    int n = 10;
    // p = malloc(n*sizeof(int));
    p = calloc(n, sizeof(int));
    int array[10];
    printf("Array allocated size: %ld\n", sizeof(array));
    printf("Dynamically allocated space size: %ld\n", sizeof(*p));
    free(p);
    return 0;
}