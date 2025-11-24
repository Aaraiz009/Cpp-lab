#include<stdio.h>

int main() {
    int a;
    
    printf("Ënter the value of a:");
    scanf("%d",&a);
    
    int *ptr;
    ptr=&a;
    
    printf(" address of a is: %d",ptr);
    printf("\n");
    printf(" value of a is%d",*ptr);
    
    return 0;
}
