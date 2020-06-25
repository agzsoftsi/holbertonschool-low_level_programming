#include "monty.h"
/**
 * _div -des the second top element of the stack
 * by the top element of the stack.
 * @stack: node head
 * @num_line: number of the line
 */
void _div(stack_t **stack, unsigned int num_line)
{
	stack_t *temp1;
	stack_t *temp2;
	int divi = 0;

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
		divi = temp2->n / (*stack)->n;
		temp1 = *stack;
		*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(temp1);
		(*stack)->n = divi;
	}
	else
	{
		dprintf(2, "L%u: can't div, stack too short\n", num_line);
		free(global.line);
		fclose(global.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
