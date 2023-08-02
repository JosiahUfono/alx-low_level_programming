#include "main.h"

/**
 * numberchecker - checkes if input argument is a number.
 * main - entry point to the program. Prints change depending on amount input
 * @num: parameter to be checked if its a number
 * Return: returns zero indicating successful.
*/

int numberchecker(char *num)
{
	int j;

	for (j = 0; num[j] != '\0'; j++)
	{
		if (num[j] < '0' || num[j] > '9')
		return (0);
	}
	return (1);
}

/**
 * main - entry point to the program. Prints change depending on amount input
 * @argc: returns the number of arguments passed during run time
 * @argv: array of space sperated arguments passed to CLI during runtime
 * Return: returns zero indicating successful.
*/
int main(int argc, char *argv[])
{
	char *input = argv[1];
	int change = 0, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(input);
	if ((change >= 0 && numberchecker(input) == 0) ||
	(change < 0 && numberchecker(&input[1]) == 0))
	{
		printf("Error\n");
		return (1);
	}
	if (change < 0)
		change = 0;

	cents = change / 25;
	change %= 25;
	cents = cents + (change / 10);
	change %= 10;
	cents = cents + (change / 5);
	change %= 5;
	cents = cents + (change / 2);
	change %= 2;
	cents += change;
	printf("%d\n", cents);
	return (0);
}
