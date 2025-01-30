#include "array_functions.h"

int main() {
    char* array = NULL;
    int n = 3;
    array = createCharArray(n);
    for(int i=0; i<n; i++) {
        printf("array[%d]: %c\n", i, *(array+i));
    }
    free(((int*)array)-1);
    return 0;
}