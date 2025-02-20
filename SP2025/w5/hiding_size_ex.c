#include<stdio.h>
#include<stdlib.h>

typedef struct employee {
    char name[20];
    int id;
    float salary;
} Employee;

int main() {

    Employee* employee_list;
    int num_of_employees = 10;

    employee_list = malloc(num_of_employees * sizeof(Employee) + sizeof(int));

    *((int*)employee_list) = num_of_employees;

    employee_list = (Employee*)(((int*)employee_list)+1);

    // simply assign use the employee variables and data

    employee_list = (Employee*)(((int*)employee_list)-1);
    free(employee_list);

    return 0;
}