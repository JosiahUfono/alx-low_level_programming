#include "main.h"

/**
 * _isdigit - checks if input is a digit
 * Return: 1 if uppercase, 0 otherwise
 * @c: the digit to be checked
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
