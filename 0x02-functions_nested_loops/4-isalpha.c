#include "main.h"
/**
* _isalpha - this shows 1 if the input is a lowercase character.
* Another case shows 0
* @c: the ASCII code characters
* Return: always 1 for lowercase, 0 if otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
