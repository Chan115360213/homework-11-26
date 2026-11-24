#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void swap( int *element1ptr , int *element2ptr )
{
    int temp = *element1ptr;
    *element1ptr = *element2ptr;
    *element2ptr = temp;
}

void bubblesort(int* const array,  const int size);

int main()
{
    int array[SIZE];
    printf("Enter number;\n");
    for(int i = 0; i < SIZE; i++)
		scanf_s("%d\n", &array[i]);
    bubblesort(array, SIZE);
    for(int i = 0; i < SIZE; i++)
        printf("%d ", array[i]);
}

void bubblesort(int* const array, const int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if(array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
        }
    }
}