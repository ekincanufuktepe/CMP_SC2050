#include<stdio.h>

int factorial(int n, int result) {
    if(n == 0) {
        return 1;
    }
    if(n == 1) {
        return result;
    }
    return factorial(n-1, result*n);
}

int main() {
    int n = 0;
    printf("Factorial %d! = %d\n", n, factorial(n, 1));
    return 0;
}