//9. Write a program that reads an array and displays a medium
#include <stdio.h>
int main()
{
    int n;

    printf("Size : ");
    scanf("%d",&n);

    int array[n];

    printf("Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    int mediamIndex;

    if (n % 2 == 0)
    {
        mediamIndex = n / 2 - 1;
    }
    else
    {
        mediamIndex = n / 2;
    }


    printf("The mediam index is: %d\n", mediamIndex);
    printf("The mediam value is: %d\n", array[mediamIndex]);

    return 0;
}