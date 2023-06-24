#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * exluding 2 and 4.
 * Return: no return.
 */
void print_most_numbers(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		if (digit != 50 && digit != 52)
			_putchar(digit);
	}
	_putchar('\n');
}
