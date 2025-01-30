#include<stdio.h>
#include<stdlib.h>

int main() {

    int* p;
    p = NULL;
    int n = 5; // size of the dyn. allocated array

    p = malloc(n*sizeof(int));

    // initialize the dynamic array
    for(int i=0; i<n; i++) {
        *(p+i) = i;    
    }

    for(int i=0; i<n; i++) {
        // printf("*(p+%d): %d\n", i, *(p+i));
        printf("p[%d]: %d, Address: %p\n", i, p[i], &p[i]);
    }

    free(p);  // prevent memory leaks
    p = NULL; // prevent dangling pointers
    printf("p[0]: %d, Address: %p\n", p[0], &p[0]);
    return 0;
}