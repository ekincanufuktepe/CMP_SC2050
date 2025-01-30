#include<stdio.h>

int main() {

    int* intPtr = NULL;
    float* floatPtr = NULL;

    int n = 5;
    float f = 1.2;

    intPtr = &n;
    floatPtr = &f;

    f = n;

    printf("int value: %d\n", *intPtr);
    printf("float value: %f\n", *floatPtr);

    return 0;
}