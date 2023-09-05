#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: The name of the file to create
 * @text_content: The content to be added at the file
 * Return: 1 if successful else returns -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, j;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0600);

	if (fd >= 0)
	{
		for (j = 0; text_content != NULL && *(text_content + j) != '\0'; j++)
		{
			if (write(fd, text_content + j, 1) != 1)
				return (-1);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
