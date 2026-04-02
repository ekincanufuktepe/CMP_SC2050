#include<stdio.h>

int factorial(int n);

int main() {

    int n = -1;
    printf("%d!: %d\n", n, factorial(n));
    return 0;
}

int factorial(int n) {
    // if(n < 0) {
    //     return -1;
    // }
    if(n == 0) {
        return 1;
    }
    printf("%d\n", n);
    return n * factorial(n-1);
}