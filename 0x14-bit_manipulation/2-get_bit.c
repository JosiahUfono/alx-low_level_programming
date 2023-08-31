#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: number holding the bit
 * @index: the index of the bit to set
 * Return: 1 if successful, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	num <<= index;
	*n = *n | num;
	return (1);
}
