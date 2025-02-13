#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void makeSound() {
    printf("Meow\n");
}

typedef struct petStrct {
    int age;
    char name[20];
    void (*funcPtr)();  // function pointer
}Pet;

int main() {
    struct petStrct pet;
    pet.age = 2;
    strncpy(pet.name, "Peanut", 20);
    pet.funcPtr = makeSound;
    printf("Addess of function: %p\n", makeSound);

    printf("Pet name: %s\n", pet.name);
    printf("Pet age: %d\n", (&pet)->age);
    pet.funcPtr();

    Pet* snoopy = NULL;
    printf("Size of \"struct petStrct\": %ld\n", sizeof(struct petStrct));
    printf("Size of \"Pet\": %ld\n", sizeof(Pet));
    printf("Size of pointer \"snoopy\": %ld\n", sizeof(snoopy));
    printf("Size of data that \"snoopy\" points to: %ld\n", sizeof(*snoopy));
    snoopy = malloc(sizeof(*snoopy));
    //snoopy->age = 22;
    (*(snoopy)).age = 22;
    strncpy(snoopy->name, "Snoopy", 20);
    snoopy->funcPtr = makeSound;
    printf("Pet name: %s\n", snoopy->name);
    printf("Pet age: %d\n", snoopy->age);
    free(snoopy);

    return 0;
}