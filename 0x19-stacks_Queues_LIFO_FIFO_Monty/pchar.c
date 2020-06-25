#include "monty.h"
/**
 * _pchar - prints the char at the top of the stack, followed by a new line
 * @stack: head
 * @num_line: integer
 */

void _pchar(stack_t **stack, unsigned int num_line)
{
	stack_t *temp;

	temp = *stack;
	if (temp == NULL)
	{
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		dprintf(2, "L%u: can't pchar, stack empty\n", num_line);
		exit(EXIT_FAILURE);
	}
	if (temp->n >= 128 || temp->n < 0)
	{
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		dprintf(2, "L%d: can't pchar, value out of range\n", num_line);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp->n);
}
