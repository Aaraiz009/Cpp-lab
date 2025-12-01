// 9. Array of Pointers to Strings 
// Declare an array of pointers to char, store 5 names, and print them one by one. 
#include <stdio.h>

int main() {

    char *names[5] = {"Anshuman", "Ravi", "Priya", "Sanya", "Arjun"};

    printf("The names are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
