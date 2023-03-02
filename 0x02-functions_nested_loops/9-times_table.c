#include "main.h"
/**
* times_table - this prints 9 times table
* Return: the loop from 0 - 9 time table
*/
void times_table(void)
{
	int a, b, mul, x, chk;

		for (a = 0; a <= 9; a++)
		{
			for (b = 0; x = 1; b <= 9; b++; x++)
			{
				if (chk > 9 && b != 9)
				mul = a * b
					chk = a * x;
					_putchar("%d, ", mul);
				else if (b == 9)
					_putchar("%d", mul);
				else
					_putchar("%d,  ", mul);
			}
			_putchar('\n');
		}
}
