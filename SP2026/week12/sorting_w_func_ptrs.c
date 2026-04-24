#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    int value;
} Ints;

// Comparator
int compare_by_integer_desc(const void* a, const void* b) {
    const Ints *p1 = (const Ints*) a;
    const Ints *p2 = (const Ints*) b;
    return (p2->value - p1->value);
}

int compare_by_integer_asc(const void* a, const void* b) {
    const Ints *p1 = (const Ints*) a;
    const Ints *p2 = (const Ints*) b;
    return (p1->value - p2->value);
}

int compare_by_names(const void* a, const void* b) {
    const char *p1 = (const char*) a;
    const char *p2 = (const char*) b;
    return strcmp(p1,p2);
}

int main() {

    Ints integers[] = {3,7,9,4,5,0,1,2,7,2,4};

    char names[4][20] = {"Rob", "Bob", "Justin", "Evan"};

    size_t size = sizeof(integers)/sizeof(integers[0]);
    printf("Size of array: %lu\n", size);

    qsort(integers, size, sizeof(Ints), compare_by_integer);

    for(size_t i = 0; i<size; i++) {
        printf("%d ", integers[i].value);
    }
    printf("\n");
    qsort(names, 4, 20, compare_by_names);

    for(int i = 0; i<4; i++) {
        printf("%s ", names[i]);
    }

    printf("\n");


    return 0;
}
