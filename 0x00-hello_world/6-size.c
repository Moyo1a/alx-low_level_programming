#include<stdio.h>
/**
  * main - this contains all the sizes of data types
  * Return: success if (0)
*/

int main(void)
{
	printf("Size of char: %lu bytes(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of long int: %lu byte(s)", sizeof(long int));
	printf("Size of long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of float: %lu byte(s)", sizeof(float));
	return (0);
}
