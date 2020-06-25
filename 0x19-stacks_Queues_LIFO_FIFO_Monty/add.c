#include "monty.h"
/**
 * _add - adds the top two elements of the stack.
 * @stack: head
 * @num_line: number of line
 */
void _add(stack_t **stack, unsigned int num_line)
{
	stack_t *temp1;
	stack_t *temp2;
	int sum = 0;

	if (*stack && (*stack)->next)
	{
		temp2 = (*stack)->next;
		sum = (*stack)->n + temp2->n;
		temp1 = *stack;
		*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(temp1);
		(*stack)->n = sum;
	}
	else
	{
		dprintf(2, "L%d: can't add, stack too short\n", num_line);
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
