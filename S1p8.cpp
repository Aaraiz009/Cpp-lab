// 8. String Length using Pointer Traversal 
// Write a function int strLength(char *s) that calculates the length of a string without using 
// strlen. Use pointer movement. 
#include <stdio.h>
int strLength(char *s){
    int count = 0;
    while (*s != '\0')
    {
        count++;
        *s++;
    }
    return count;

}

int main() {

    char s[] = "Anshuman";
    int result = strLength(s);
    printf("The length of given string is: %d", result);

    return 0;
}
