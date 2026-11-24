#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int binarysearch(const int* a, int key, int start, int end);
int main()
{
    int a[SIZE];
    int key;
    for (int i = 0; i < 100;i++)
    {
        a[i] = i * 2;
    }
    printf("Enter key number:\n");
    scanf_s("%d", &key);
    int index = binarysearch(a, key, 0, SIZE - 1);
    printf("%d", index);
}

int binarysearch(const int* a, int key, int start, int end)
{
    int mid = (start + end) / 2;
    if (key == a[mid])
        return a[mid];
    else if (key > a[mid])
    {
        return binarysearch(a, key, mid + 1, end);
    }
    else
        return binarysearch(a, key, start, mid - 1);
}