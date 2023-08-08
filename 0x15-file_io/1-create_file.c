#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the file to create
 * @text_content: content of the file
 * Return: 1 if successful else returns -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, j;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd >= 0)
	{
		for (j = 0; text_content != NULL && *(text_content + j) != '\0'; j++)
		{
			if (write(fd, text_content + j, 1) != 1)
				return (-1);
		}
		if (close(fd) == -1)
			return (-1);
		return (1);
	}
	return (-1);
}
