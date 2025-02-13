#include<stdio.h>

int main() {
    int array[3][5];

    printf("Address of array: %d\n", ((int) array));
    printf("Address of array[0]: %p\n", array[0]);
    printf("Address of array[0][0]: %p\n", &array[0][0]);

    printf("Address of array[1]: %p\n", array[1]);
    printf("Address of array[1][1]: %d\n",(int)((&array[1][1])));

    return 0;
}