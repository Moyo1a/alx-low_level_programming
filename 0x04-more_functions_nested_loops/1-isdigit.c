#include "main.h"
/**
* _isdigit - this function prints digit from 0 - 9
* @c: the character in ASCII code
* Return: 1 for digit, 0 if otherwise
*/
int _isdigit(int c)
{
	int start = 48, end = 57;

	if (c >= start && c <= end)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
