#include<stdio.h>

void swapByvalue(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    
    printf("value of x and y inside swapbyValue is %d and %d",a,b);
    printf("\n");
    
}

int swapByRefrence(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
printf("value of a and b after swapping using call by refrence is %d and %d",*a,*b);
        printf("\n");
    return 0;
}
int main() {
int x,y;

    printf("Ënter the value of x:");
    scanf("%d",&x);
    
    printf("Ënter the value of y:");
    scanf("%d",&y);
    
    printf("Before Swapping value of x and y is: %d and %d",x,y);
    printf("\n");
    
     swapByvalue(x,y);
     printf("value of x and y after swapping using call by value x=%d and y=%d",x,y);
     printf("\n");
     swapByRefrence(&x,&y);
    return 0;

}
