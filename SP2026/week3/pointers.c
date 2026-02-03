#include<stdio.h>
#include<stdlib.h>

int main() {

    void* ptr = NULL;

    ptr = malloc(sizeof(char) + sizeof(int) + sizeof(double));

    *((double*)ptr) = 3.14;
    *((int*)(((double*)ptr) + 1)) = 5;
    *((char*)(((int*)(((double*)ptr) + 1)) + 1)) = 'a';

    double* dPtr = (double*)ptr;
    *dPtr = 3.14;
    int* iPtr = (int*)(dPtr + 1);
    *iPtr = 5;
    char* cPtr = (char*)(iPtr + 1);
    *cPtr = 'a';


    printf("Double: %lf\n", *((double*)ptr));
    printf("Char: %c\n", *((char*)(((int*)(((double*)ptr) + 1)) + 1)));
    printf("Integer: %d\n\n", *((int*)(((double*)ptr) + 1)));

    printf("Double: %lf\n", *dPtr);
    printf("Char: %c\n", *cPtr);
    printf("Integer: %d\n", *iPtr);

    free(ptr);

    return 0;
}