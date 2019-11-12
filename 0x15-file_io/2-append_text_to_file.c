#include "holberton.h"
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: points to file that we will be receiving
 * @text_content: the text that is being written
 * Return: 1 if success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, wf, cf, len;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_APPEND | O_WRONLY);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		wf = write(f, text_content, len);
	}
	if (wf == -1)
		return (-1);
	cf = close(f);
	if (cf == -1)
		return (-1);
	return (1);
}
