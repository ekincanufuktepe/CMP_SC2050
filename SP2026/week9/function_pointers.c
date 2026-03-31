#include<stdio.h>

void greet() {
    printf("Hi there I am greet()\n");
}

void squareIt(int x) {
    printf("Square: %d\n", x*x);
}

void doubleIt(int x) {
    printf("double it: %d\n", x*2);
}

void generalMath(int x, void fPtr(int)) {
    fPtr(x);
}

int main() {

    /*  If you are using a UNIX-based machine
        You can use the command: object -d a.out
        to disassemble (reverse engineer) your
        executable image to assembly, which will
        show the "virtual" addresses of your code
        and functions.
    */

    /*  This is a function pointer 
        that has a void return type 
        that take one integer parameter */
    void (*funcPtr)(int); 

    printf("greet function address: %p\n", greet); // print the address of function greet
    funcPtr = greet;
    // funcPtr();   // you may need to use this function pointer declaration: void (*funcPtr)()
    // funcPtr(5)   // still will work the value 5 will be discarded and not used. But still may get a warning.
    funcPtr = squareIt;
    generalMath(5, funcPtr);
    funcPtr = doubleIt;
    generalMath(2, funcPtr);
    // greet();
    return 0;
}