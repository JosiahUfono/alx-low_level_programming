#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an int
 * @b: The string representation of the binary number
 * Return: the unsigned int representation of the binary number, otherwise,
 * 0 if b is Null or string is invalid
 */
unsigned int binary_to_uint(const char *b)
{
	int len, j;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (len = 0; *(b + len) != '\0'; len++)
	{
		if (!(b[len] == '0' || b[len] == '1'))
			return (0);
	}

	for (j = 0; *(b + j) != '\0';j++)
	{
		num += ((*(b + j) - '0') * (1 << (len - j - 1)));
	}
	return (num);
}
