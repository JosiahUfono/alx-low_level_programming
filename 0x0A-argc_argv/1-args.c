#include "main.h"

/**
 * main - the entry point to the program
 * @argc: returns the number of arguments passed during run time
 * @argv: array of space sperated arguments passed to CLI during runtime
 * Return: returns zero indicating successful.
*/

int main(int argc, char *argv[])
{
	int j, sum = 0;

	for (j = 0; j < argc; j++)
	{
	sum += atoi(argv[j]);
	}
	printf("%d\n", argc - 1);
	return (0);
}
