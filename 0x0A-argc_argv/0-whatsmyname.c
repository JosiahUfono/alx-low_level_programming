#include "main.h"

/**
 * main - the entry point to the program.
 * @argc: returns the number of arguments passed during run time.
 * @argv: array of space sperated arguments passed to CLI during runtime.
 * Return: returns @argc; the number of arguments passed during run time.
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (argc);
}
