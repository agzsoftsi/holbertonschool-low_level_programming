#include "holberton.h"

/**
 * main - Copy the contents of a file to other file
 * @argc: num arg
 * @argv: vector arg
 * Return: 0 if successful, 97-100 otherwise
 */
int main(int argc, char *argv[])
{
	int ffrom, fto, c_status;
	char buffer[1024];
	ssize_t size;

	if (argc != 3)
		args_error();

	ffrom = open(argv[1], O_RDONLY);
	if (ffrom == -1)
		f_from_error(argv[1]);

	fto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fto == -1)
		f_to_error(argv[2]);

	while ((size = read(ffrom, buffer, 1024)) > 0)
	{
		if (write(fto, buffer, size) != size)
			f_to_error(argv[2]);
	}

	if (size == -1)
		f_from_error(argv[1]);

	c_status = close(ffrom);
	if (c_status == -1)
		c_error(ffrom);

	c_status = close(fto);
	if (c_status == -1)
		c_error(fto);

	return (0);
}

/**
 * args_error - Print error and exit if wrong number of arguments
 */
void args_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * f_from_error - Print error and exit if file from error
 * @file: The name of the file
 */
void f_from_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * f_to_error - Print error and exit if file to error
 * @file: The name of the file
 */
void f_to_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * c_error - Print error and exit if close fails
 * @fd: The file descriptor
 */
void c_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
