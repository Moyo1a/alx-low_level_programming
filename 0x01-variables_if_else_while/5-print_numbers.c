#include <stdio.h>
/**
  *main - entry point
  *Description: prints numbers in base 2 from 0 -10
  *Return: always 0
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
