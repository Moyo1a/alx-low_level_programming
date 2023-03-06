#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
* Description:check for a number if positive or negative of
* Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
		printf("%d is negative", n);
	return (0);
}
