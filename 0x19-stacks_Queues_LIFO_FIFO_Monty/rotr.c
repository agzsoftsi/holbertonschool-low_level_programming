#include "monty.h"
/**
 * _rotr - rotates the stack to the bottom
 * @stack: head
 * @num_line: num line
 */

void _rotr(stack_t **stack, unsigned int num_line)
{
	stack_t *temp2;

	if (*stack && (*stack)->next)
	{
		temp2 = *stack;
		if (num_line)
			while (temp2->next)
			{
				temp2 = temp2->next;
			}
		temp2->next = *stack;
		temp2->prev->next = NULL;
		temp2->prev = NULL;
		*stack = temp2;
	}
}
