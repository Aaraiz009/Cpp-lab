#include <stdio.h>
void minmax(int a[], int n)
{
    int min = *a;
    int max = *(a + 1);

    for (int i = 0; i < n; i++)
    {
        if (*(a + i) > max)
        {
            max = *(a + i);
        }
        if (*(a + i) < min)
        {
            min = *(a + i);
        }
    }
    printf(" maximum element is : %d \n", max);
    printf(" minimum element is : %d \n", min);
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

    minmax(a, n);
}
