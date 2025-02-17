#include<stdio.h>

typedef struct {
    char a;
    int b;
} X;

typedef struct {
    char a;
    int b;
} Y;

int main() {
    
    typedef int Age;
    typedef int Salary;

    Age age = 20;
    Salary salary = 50000;

    age = salary;
    printf("Age: %d\n", age);

    X x_data = {'a', 5};
    Y y_data = {'b', 6};

    x_data = y_data;

    return 0;
}