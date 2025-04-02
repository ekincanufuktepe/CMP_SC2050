#include<stdio.h>

int fib(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    printf("Fib. seq: %d\n", fib(8));
    return 0;
}