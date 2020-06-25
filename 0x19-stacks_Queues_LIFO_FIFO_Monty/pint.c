#include "monty.h"
/**
 * _pint - prints the value at the top of the stack
 * @stack: head
 * @num_line: num line
 */
void _pint(stack_t **stack, unsigned int num_line)
{
	stack_t *temp;

	temp = *stack;
	if (temp == NULL)
	{
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		dprintf(2, "L%u: can't pint, stack empty\n", num_line);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->n);
}
