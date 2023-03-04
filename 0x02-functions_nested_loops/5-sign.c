#include "main.h"
/**
* print_sign -declarations if the input numbers
* @n: numbers as integers will print the signs
* Return: if n > 0, if n < 0, if n == 0, print the sign
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


