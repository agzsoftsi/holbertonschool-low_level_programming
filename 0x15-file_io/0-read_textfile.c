#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: points to file that we will be receiving
 * @letters: size of letters to read in
 * Return: the readFile
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f = 0, rf = 0, wf = 0, cf;
	char *buffer;
	/*
	 *f: file
	 *rf: read file
	 *wf: write file
	 *cf: close file
	 */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	rf = read(f, buffer, letters);
	if (rf == -1)
		return (0);
	wf = write(STDOUT_FILENO, buffer, rf);
	if (wf == -1)
		return (0);
	cf = close(f);
	if (cf == -1)
		return (0);
	free(buffer);
	return (rf);
}
