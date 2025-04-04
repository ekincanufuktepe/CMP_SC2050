#include<stdio.h>
#include<string.h>

int isPalindrome(char* str, int length) {
    if(length < 2) {
        return 1;
    }
    return *str == *(str+length-1) && isPalindrome(str+1, length-2);
}

int main() {
    char* str = "xy";
    printf("Is \"%s\" a palindrom: %s\n", str, isPalindrome(str, strlen(str)) ? "true" : "false");
    return 0;
}