#include "monty.h"

/**
 * _pop - removes the top element of the stack
 * @stack: head
 * @num_line: number line
 */
void _pop(stack_t **stack, unsigned int num_line)
{
	stack_t *temp;

	temp = *stack;
	if (temp == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", num_line);
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next)
	{
		*stack = temp->next;
		(*stack)->prev = NULL;
		free(temp);
	}
	else
		free_l(stack);
}
