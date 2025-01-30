#include "array_size.h"

int main() {
    // int array[5];
    int* array;
    // int* p;
    // p = NULL;
    array = NULL;
    int size = 5;
    array = malloc(size*sizeof(int) + sizeof(int));
    *array = size;
    // p = array;
    array++;
    printf("Array size: %d\n", getArraySize(array));
    // array[0] = size;
    for(int i=0; i<getArraySize(array); i++) {
        array[i] = -(i+1);
    }
    // print data
    for(int i=0; i<size; i++) {
        printf("array[%d]: %d\n", i, *(array+i));
    }
    // printf("Array size: %ld\n", sizeof(array)/sizeof(int));
    // printf("(through function) Array size: %d\n", getArraySize(array));
    
    // free(&array[-1]);
    free(array-1);
    return 0;
}