#include "main.h"
/**
* print_sign - this prints the sign of a number if n is greater, less or equal to zero
* @n:n is an input number (integer)
* Return:shows 1 if greater than 0, 0 if n is zero, -1 if less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}



