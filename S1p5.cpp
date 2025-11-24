#include<stdio.h>

int maxNum(int *num1 ,int *num2, int *num3){
    int max;
    max=*num1;
    if((*num2)>max){max=*num2;}
    if((*num3)>max){max=*num3;}
    
    printf("The greatest number is %d",max);
    
return 0;
}

int main() {
    int num1,num2,num3;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    printf("Enter third number:");
    scanf("%d",&num3);
    
    maxNum(&num1, &num2, &num3);

    return 0;
}
