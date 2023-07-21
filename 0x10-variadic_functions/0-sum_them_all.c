#include "variadic_functions.h"
#include <stdarg.h>
/*
 * sum_them_all: Function that sums and returns all input arguments
 * @va_list: Gives the name of the list
 * @va_start: Initializes the list
 * @va_arg: access memebers of the list
 * @va_end: Signifies the end of the list
 * @n: the number of arguments to be summed.
 * It initializes a 'va_list' object args with the 'va_start' macro,
 * and then iterates over the variable argument list using the 'va_arg'
 * macro to retrieve each argument as an int. Finally, it cleans up the
 * va_list object using the 'va_end' macro.
 */

int sum_them_all(const unsigned int n, ...)
{
int num_sum = 0;
va_list args;
unsigned int i;

va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int temp = va_arg(args, int);
		num_sum += temp;
	}
va_end(args);
return (num_sum);
}
