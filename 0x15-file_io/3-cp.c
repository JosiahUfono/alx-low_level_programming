#include "main.h"

/**
 * close_files - closes a file handle and exits program on failure
 * @file_hdl: The file handler
 */
void  close_files(int file_hdl)
{
	if (close(file_hdl) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_hdl);
		exit(100);
	}
}

/**
 * copy_contents - Copies the contents from one file to another
 * @from_fd: The source file handle
 * @to_fd: The destination file handle
 * @src_file: The source file name
 * @dest_file: The destination file name
 */
void copy_contents(int from_fd, int to_fd, char *src_file, char *dest_file)
{
	int i, c, buf_size = 1024;
	void *buf = malloc(sizeof(char) * buf_size);

	if (buf != NULL)
	{
		for (i = 0; ; i += buf_size)
		{
			c = read(from_fd, buf, buf_size);
			if (c == 0)
				break;
			if (c < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
				exit(98);
			}
			if (write(to_fd, buf, c) != c)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
				free(buf);
				exit(99);
			}
		}
		free(buf);
	}
}

/**
 * main - Copies the content of a file to another file
 * @argc: The number of CLI arguments
 * @argv: Array of the CLI arguments
 * Return: 0 if successful, else returns a number between 97 and
 * 100. Each represents ans error exit code.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		close_files(file_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	copy_contents(file_from, file_to, argv[1], argv[2]);
	close_files(file_from);
	close_files(file_to);
	return (0);
}
