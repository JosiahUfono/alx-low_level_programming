#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be inputted
*/

void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
