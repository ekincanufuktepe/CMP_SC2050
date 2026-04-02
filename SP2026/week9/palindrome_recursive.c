#include<stdio.h>
#include<string.h>

int isPalindrome(char* str, int len);

int main() {
    char* str = "racecar";
    int len = strlen(str);
    printf("String length: %d\n", len);
    printf("'%s' is %s palindrome\n", str, isPalindrome(str, len) ? "a" : "not a");
    return 0;
}

int isPalindrome(char* str, int len) {
    if(len == 1 || len == 0)
        return 1;
    return  (*str == *(str + len - 1)) && isPalindrome(str+1, len-2);
}