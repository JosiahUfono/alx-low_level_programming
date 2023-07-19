#include "main.h"
/**
* print_name - function that prints a name.
* @f: Functional pointer
* @name: Function input argument.
*/

void print_name(char *name, void (*f)(char *))
{
if ((name || f) ==  NULL)
	return;
f(name);
}
