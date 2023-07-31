#include "main.h"

/**
 * main - entry point to the program. Prints multiple of arguments entered
 * @argc: returns the number of arguments passed during run time
 * @argv: array of space sperated arguments passed to CLI during runtime
 * Return: returns zero indicating successful.
*/

int main(int argc, char **argv)
{
	int j, arg1, arg2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	for (j = 1; j < argc; j++)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
	}
	printf("%d\n", arg1 * arg2);
	return (0);
	}
}
