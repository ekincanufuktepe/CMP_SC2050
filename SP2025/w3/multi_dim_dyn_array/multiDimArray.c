#include "multiDimArray.h"

void printDynamic2DArray(int** array2d) {
    int* p = (((int*)array2d)-1);
    for(int i=0; i<*p; i++) {
        for(int j=0; j<array2d[i][-1]; j++) {
            printf("%d ", array2d[i][j]);
        }
        printf("\n");
    }
}

int** createDynamic2DArray(int rows, int* columnSizes) {
    int** array2d = malloc(sizeof(int) + sizeof(int*) * rows);
    ((int*)array2d)[0] = rows;
    array2d = (int**)(((int*)array2d)+1);
    for(int i=0; i<rows; i++) {
        array2d[i] = malloc(sizeof(int) + sizeof(int) * columnSizes[i]);
        array2d[i][0] = columnSizes[i];
        array2d[i]++;   // change address to the first column data
    }
    return array2d;
}

int** create2DArray(int rows, int columns) {
    int** array2d = malloc(sizeof(int*) * rows);
    for(int i=0; i<rows; i++) {
        array2d[i] = malloc(sizeof(int) * columns);
    }
    return array2d;
}

void free2DArray(int** array2d, int rows) {
    for(int i=0; i<rows; i++) {
        free(array2d[i]);
    }
    free(array2d);
}

void freeDynamic2DArray(int** array2d) {
    int* p = (((int*)array2d)-1);
    for(int i=0; i<*p; i++) {
        free(array2d[i]-1);
    }
    free(p);
}

