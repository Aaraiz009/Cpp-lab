#include<stdio.h>

void increment(int* p){
    int x=(*p)+1;
    printf("Value of x after increment is %d",x);
}

int main(){
    int x;
        printf("Ënter the value of x:");
    scanf("%d",&x);
    printf("\n");
    increment(&x);
    return 0;
}
