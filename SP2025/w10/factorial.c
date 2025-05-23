#include<stdio.h>

int factorial(int n) {
    if(n == 1 || n == 0) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int n = 5;
    printf("Factorial %d! = %d\n", n, factorial(n));
    return 0;
}