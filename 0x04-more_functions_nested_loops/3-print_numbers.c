#include "main.h"
/**
* print_numbers - this prints numbers 0 - 9
* Return: always 0
*/
void print_numbers(void)
{
	int start = 0, end = 9

		while (start <= end)
		{
			putchar(start + '0');
			start++;
		}
	_putchar('\n');
}


