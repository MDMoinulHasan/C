#include <stdio.h>
int main()
{
    int n, array1[20], array2[30];
    printf("Enter the size of array1 (0-20) :");
    scanf("%d", &n);
    printf("\nInput elements Here\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }
   
    printf("\nFirst array1 elements are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("num[%d] : ", i);
        printf("%d\n", array1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        array2[i] = array1[i];
    }

    printf("\nSecond array2 elements are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("num[%d] : ", i);
        printf("%d\n", array2[i]);
    }

 return 0;
}