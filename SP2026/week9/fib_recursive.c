#include<stdio.h>

int fib(int n);
void reverse(char*);
int gcd(int a, int b);

int main() {
    int n = 100;
    // printf("Fib. sequence at: %d\n", fib(n));

    char* string = "test";
    reverse(string);

    printf("\n%d\n", gcd(36, 24));

    return 0;
}

int fib(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

void reverse(char* str) {
    if(*str == '\0')
        return;
    reverse(str+1);
    printf("%c", *str);
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a%b);
}