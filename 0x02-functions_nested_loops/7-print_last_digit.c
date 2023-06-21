include "main.h"

/*
* print_last_digit: returns the last digit of a number
*@a: the given digit
*Return: returns the last digit
*/

int print_last_digit(int n)
{
int a;

if (n < 0)
	a = -n;
a = n % 10;

a = (a < 0)
	a = -a;

_putchar(a + '0');

return (a);
}
