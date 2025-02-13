#include "multiDimArray.h"

int main() {
    int** matrix = NULL;
    int row = 3;
    int column = 5;
    // matrix = create2DArray(row, column);
    int columnSizes[] = {1,2,3};
    matrix = createDynamic2DArray(row, columnSizes);
    // fill dynamic 2D array here
    // printf("Row: %p\n", matrix);
    for(int i=0; i<row; i++) {
        // printf("Row: %p\n", matrix[i]);
        for(int j=0; j<columnSizes[i]; j++) {
            // printf("Column: %p\n", &matrix[i][j]);
            matrix[i][j] = i;
        }
        // printf("\n");
    }
    printDynamic2DArray(matrix);

    freeDynamic2DArray(matrix);
    //free2DArray(matrix, row);
    matrix = NULL; // handling dangling pointers
    return 0;
}