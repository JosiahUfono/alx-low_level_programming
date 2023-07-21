#include "variadic_functions.h"

/**
 * print_strings - print_strings function prints strings
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);
		if (!string)
		{
			string = "nil";
			printf("%s", string);
		}
		if (!separator)
		{
			printf("%s", string);
		}
		else if (separator && i == 0)
		{
			printf("%s", string);
		}
		else
		{
			printf("%s%s", separator, string);
		}
		printf("\n");
		va_end(list);
	}
}
