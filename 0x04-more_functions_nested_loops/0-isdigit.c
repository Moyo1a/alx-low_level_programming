#include "main.h"
/**
* _isupper - checks if alphabet is uppercase character
* @c: character to be checked
* Return: 1 if @c is uppercase
*/
int _isupper(int c)
{
	int start = 65, end = 90;

	if (c >= start && c <= end)
		return (1);
	return (0);
}
