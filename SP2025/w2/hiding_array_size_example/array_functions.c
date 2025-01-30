#include "array_functions.h"
int getArraySize(char* array) {
    return -1;
}
char* createCharArray(int size) {
    char* array;
    array = NULL;
    array = malloc(size*sizeof(char)+sizeof(int));
    *((int*)array) = size;
    array = (char*)(((int*)array)+1);
    for(int i=0; i<size; i++) {
        array[i] = 'a' + i;
    }
    return array;
}