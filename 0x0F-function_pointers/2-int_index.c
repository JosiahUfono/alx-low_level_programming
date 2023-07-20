#include "function_pointers.h"
/*
 * int_index: returns the index of the first element
 * @size:  is the number of elements in the array
 * @array: array of integers
 * @cmp: is a pointer to the function to be used to compare values
 * return: returns an integer if no elements match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
