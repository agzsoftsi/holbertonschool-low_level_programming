#include "monty.h"
/**
 * _rotl - rotates the stack to the top.
 * @stack: head
 * @num_line: num line
 */

void _rotl(stack_t **stack, unsigned int num_line)
{
	stack_t *temp1;
	stack_t *temp2;

	if (*stack && (*stack)->next)
	{
		temp1 = *stack;
		temp2 = temp1;
		*stack = temp1->next;
		(*stack)->prev = NULL;
		if (num_line)
			while (temp2->next)
			{
				temp2 = temp2->next;
			}
		temp2->next = temp1;
		temp1->prev = temp2;
		temp1->next = NULL;
	}
}
