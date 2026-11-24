#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 11
void deck( int* a , int size);
int main()
{
    int a[SIZE] = { 0 };
    srand(time(0));
    deck(a, SIZE);
    for (int i = 2; i <= 12; i++)
    {
        printf("%d  =   %d\n", i, a[i - 2]);
    }
    
}

void deck( int* a , int size)
{
    int deck1, deck2,total;
    for (int i = 0; i < 36000; i++)
    {
        deck1 = rand() % 6 + 1;
        deck2 = rand() % 6 + 1;
        total = deck1 + deck2;
        int index = total - 2;
        a[index] += 1;
    }
}
