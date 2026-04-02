#include<stdio.h>

int factorial_tail(int n, int result);

int main() {

    int n = 5;
    printf("%d!: %d\n", n, factorial_tail(n, 1));
    return 0;
}

int factorial_tail(int n, int result) { 
    if(n == 0) {
        return result;
    }
    return factorial_tail(n-1, result*n);
}