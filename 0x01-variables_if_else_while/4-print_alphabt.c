#include <stdio.h>
/**
  *main - Entry point
  *Description: don't print letter e and q but the other alphabets
  *Return: always 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}