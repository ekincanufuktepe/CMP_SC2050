#include<stdio.h>
#include<stdlib.h>

void readArray(int *array);

int main() {

    int* array = NULL;
    array = malloc(sizeof(int)*5);

    int normal_array[5];

    printf("%ld\n", sizeof(array));
    printf("%ld\n", sizeof(normal_array));

    readArray(array);
    free(array);

    return 0;
}

void readArray(int *array) {
    printf("Printing from readArray()\n");
    printf("size of array: %ld\n", sizeof(array));
}