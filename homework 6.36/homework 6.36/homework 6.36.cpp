#include <stdio.h>
#include <stdlib.h>


void stringReverse(char* a);
int main()
{
    char array[10] = {0};
    printf("Enter words:\n");
    for (int i = 0;i < 10;i++)
    {
        scanf_s("%c", &array[i]);
    }
    stringReverse(array);
}

void stringReverse(char* a)
{
    if (*a == '\n')
        return;
    stringReverse(a + 1);
    printf("%c", *a);
}