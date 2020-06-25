#include "monty.h"
/**
 * _mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack.
 * @stack: head
 * @num_line: integer
 */

void _mod(stack_t **stack, unsigned int num_line)
{
	stack_t *temp1;
	stack_t *temp2;
	int mult = 0;

	if (*stack && (*stack)->next)
	{
		if ((*stack)->n == 0)
		{
			dprintf(2, "L%u: division by zero\n", num_line);
			free(global.line);
			fclose(global.fil);
			free_l(stack);
			exit(EXIT_FAILURE);
		}
		temp2 = (*stack)->next;
		mult = temp2->n % (*stack)->n;
		temp1 = *stack;
		*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(temp1);
		(*stack)->n = mult;
	}
	else
	{
		dprintf(2, "L%d: can't mod, stack too short\n", num_line);
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
