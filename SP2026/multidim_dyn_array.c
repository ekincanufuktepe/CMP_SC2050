#include<stdio.h>
#include<stdlib.h>

void* createArray(int n, int dataType);
int freeArray(void* array);
int freeArray2(void** array);
int getSize(void* array);

int main() {

    int** array = NULL;
    array = createArray(5, sizeof(int*));

    int size = *(((int*)array) - 1);
    printf("Size: %d\n", size);
    for(int i=0; i<size; i++) {
        array[i] = createArray(i+2, sizeof(int));
        for(int k=0; k<i+2; k++) {
            array[i][k] = i+1;
        }
    }

    for(int i=0; i<size; i++) {
        for(int k=0; k<array[i][-1]; k++) {
            printf("%d ", array[i][k]);
        }
        printf("\n");
    }

    for(int i=0; i<size; i++) {
        freeArray2((void**)(&(array[i])));
        // array[i] = NULL;
        // double checking if the addresses are set to NULL (handling dangling pointers)
        printf("addr: %p\n", array[i]); 
    }
    freeArray2((void**)(&array));
    // double checking if the addresses are set to NULL (handling dangling pointers)
    printf("addr: %p\n", array);

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

/*
    This version of free function will help you
    free dynamically allocated spaces, but will
    not handle possible dangling pointer issues
    for you. Whenever you call this function, 
    you need to set the pointer to NULL afterwards.
*/
int freeArray(void* array) {
    array = (void*)(((int*)array) - 1);
    if(!array)
        return 0;
    free(array);
    return 1;
}

/*
    Also handles dangling pointers.
    You need to pass the reference of the pointer
*/
int freeArray2(void** array) {
    (*array) = (void*)(((int*)(*array)) - 1);
    if(!(*array))
        return 0;
    free((*array));
    *array = NULL;
    return 1;
}

int getSize(void* array) {
    return *(((int*)array) - 1);
}