#include <stdio.h>
#include <stdlib.h>

int callbyvalue(int a);

int main()
{
	int number = 5;
	printf("The original value of number is %d", number);
	number = callbyvalue(number);
	printf("\nThe new value of number is %d\n", number);
}

int callbyvalue(int a)
{
	return a * a * a;
}