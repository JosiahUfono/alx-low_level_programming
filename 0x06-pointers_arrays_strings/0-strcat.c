#include "main.h"

/**
* _strcat: a function that concatinates two inputs; dest and src.
* @dest: Destination input parameter.
* @src: source input parameter.
* Return: a pointer to the concatinated string.
*/

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
