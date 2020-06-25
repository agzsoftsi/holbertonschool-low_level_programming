#include "monty.h"


/**
 * _size_line - size of the line
 * @line: line to read
 * Return: line
 */
int _size_line(char *line)
{
	unsigned int con = 0;

	while (line[con])
	{
		con++;
	}
	return (con);
}
