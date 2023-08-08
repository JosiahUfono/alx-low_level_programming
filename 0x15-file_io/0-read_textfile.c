#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the text file
 * @letters: number of letter it should read and print
 * Return: returns the number of letter it could read and print, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n = 0;
	int fd, a;
	void *buffer = malloc(sizeof(char) * 2);

	if (filename == NULL || buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	for (n = 0; n < (ssize_t)letters; n++)
	{
		a = read(fd, buffer, 1);
		if (a == 0)
			break;
		a = write(STDOUT_FILENO, buffer, 1);
		if (a != 1)
			return (0);
	}
	close(fd);
	free(buffer);
	return (n);
}
