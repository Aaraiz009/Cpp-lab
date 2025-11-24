#include <stdio.h>

int main() {
int arr[5]={1,2,3,4,5};
int *ptr=arr;

printf("Accessing array elements using pointers:");
printf("\n");

for(int i=0;i<5;i++){
    printf("%d ",*ptr);
    ptr++;
    
}
    return 0;
}
