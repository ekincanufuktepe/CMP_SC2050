#include<stdio.h>
#include<stdlib.h>

int** create2DArray(int rows, int columns);
int** createDynamic2DArray(int rows, int* columnSizes);
void free2DArray(int** array2d, int rows);
void printDynamic2DArray(int** array2d);
void freeDynamic2DArray(int** array2d);