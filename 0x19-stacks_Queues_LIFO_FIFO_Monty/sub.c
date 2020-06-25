#include "monty.h"
/**
 * _sub - subtracts the top element of the stack from
 * the second top element of the stack.
 * @stack: head
 * @num_line: number line
 */
void _sub(stack_t **stack, unsigned int num_line)
{
	stack_t *temp1;
	stack_t *temp2;
	int rest = 0;

	if (*stack && (*stack)->next)
	{
		temp2 = (*stack)->next;
		rest = temp2->n - (*stack)->n;
		temp1 = *stack;
		*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(temp1);
		(*stack)->n = rest;
	}
	else
	{
		dprintf(2, "L%u: can't sub, stack too short\n", num_line);
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
