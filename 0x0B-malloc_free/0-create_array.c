#include "main.h"

/**
 * create_array - Function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of an array to be created
 * @c: the  character to initialized  the array c
 * Return: Pointer to array (Success), Null (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int index = 0;

	n =(char*)malloc(size * sizeof(char));

	if (n == NULL || size == 0)
	{
		return (NULL);
	}
	while (index < size)
	{
		n[index] = c;
		index++;
	}
	return (n);
}
