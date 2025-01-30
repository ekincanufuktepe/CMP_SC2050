#include<stdio.h>

int main() {

    int* p;
    p = NULL;
    printf("Pointed address: %p\n", p);
    if(p != NULL)
        printf("Value: %d\n", *p);
    return 0;
}