#include<stdio.h>
#include<stdlib.h>

void* createArray(int n, int dataType);
int freeArray(void* array);
int getSize(void* array);

int main() {

    void* array = NULL;
    if(!(array = createArray(5, sizeof(double)))) {
        fprintf(stderr, "Couldn't create array.\n");
        return 2;
    }

    printf("Size of the array: %d\n", getSize(array));

    if(!freeArray(array)) {
        fprintf(stderr, "I am not going to free something that is NULL!\n");
        return 3;
    }

    return 0;
}

void* createArray(int size, int dataType) {
    void* array = NULL;
    if(!(array = malloc((dataType * size) + sizeof(int)))) {
        fprintf(stderr, "Dynamic allocation failed.\n");
        return 0;
    }

    *((int*)array) = size;
    
    int* tmpPtr = (int*)array;
    tmpPtr++;

    // return (void*)(((int*)array) + 1);
    return (void*)tmpPtr;
}

int freeArray(void* array) {
    array = (void*)(((int*)array) - 1);
    if(!array)
        return 0;
    free(array);
    return 1;
}

int getSize(void* array) {
    return *(((int*)array) - 1);
}