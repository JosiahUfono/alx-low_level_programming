#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: copy to this string
 * @src: copy from this string
 * @n: number of bytes to copy
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
