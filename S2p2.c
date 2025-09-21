#include <stdio.h>

void rev(int a[], int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = *(a + i);
        *(a + i) = *(a + n - i - 1);
        *(a + n - i - 1) = temp;
    }
    for (int i=0; i<n; i++){
        printf("%d \t",a[i]);
    }
}
int main()
{
    int n;
    printf("Enter the length of array :");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at index %d : ", i);
        scanf("%d", &a[i]);
    }

    rev(a, n);
}
