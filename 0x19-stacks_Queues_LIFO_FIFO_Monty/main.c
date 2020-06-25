#include "monty.h"
globals_t global;
/**
 * main - main function
 * @argc: number of the arguments
 * @argv: argument
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	stack_t *stack = NULL;
	size_t numbytes = 0;
	int bytesr = 0;
	unsigned int con = 1;

	global.flag = 1;
	global.line = NULL;
	if (argc != 2)
	{
		fputs("USAGE: monty file\n", stderr);
		exit(EXIT_FAILURE);
	}
	global.fil = fopen(argv[1], "r");
	if (global.fil == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((bytesr = getline(&global.line, &numbytes, global.fil)) != EOF)
	{
		delete_jump(global.line);
		if (global.line[0] != 35)
		{
			global.token = strtok(global.line, " \t\n");
			global.opco = global.token;
			if (global.opco != NULL)
			{
				global.token = strtok(NULL, " \t\n");
				func(global.opco)(&stack, con);
			}
			con++;
		}
	}
	free_l(&stack);
	free(global.line);
	fclose(global.fil);
	return (0);
}
