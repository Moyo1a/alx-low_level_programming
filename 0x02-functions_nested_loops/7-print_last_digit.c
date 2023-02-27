#include "main.h"
/**
* print_last_digit - this prints the last digit after remainder
* @n: this is an integer number
* Return: returns the value of last digit
*/
int print_last_digit(int n)
{

	int l;

	l = n % 10;
	if (n < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}


