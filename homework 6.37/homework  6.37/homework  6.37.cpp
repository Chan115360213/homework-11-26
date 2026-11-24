#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int recursiveMaximum(int* a , int size);
int main()
{
    int array[10];
    printf("Enter number:\n");
    for (int i = 0;i < 10;i++)
        scanf_s("%d", &array[i]);
    int max = recursiveMaximum(array , SIZE);
    printf("max = %d", max);
}

int recursiveMaximum(int* a , int size)
{
    if (size == 1)
        return a[0];
    int max = recursiveMaximum(a, size - 1);
    if (max > a[size - 1])
        return max;
    else
        return a[size - 1];
}