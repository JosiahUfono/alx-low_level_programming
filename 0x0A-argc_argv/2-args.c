#include "main.h"

/**
 * main - the entry point to the program. Prints all args on a new line.
 * @argc: returns the number of arguments passed during run time
 * @argv: array of space sperated arguments passed to CLI during runtime
 * Return: returns zero indicating successful.
*/

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
