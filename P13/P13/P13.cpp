#include <stdio.h>
#include <stdlib.h>

void callbyreference(int  &nptr);

int main()
{
    int number = 5;
    printf("The original value of number is %d", number);
    callbyreference(number);
    printf("\nThe new value of number is %d", number);
}

void callbyreference(int& nptr)
{
	nptr = nptr * nptr * nptr;
}