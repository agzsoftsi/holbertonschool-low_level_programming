#include "monty.h"
/**
 * free_l - free list
 * @stack: head
 */
void free_l(stack_t **stack)
{
	stack_t *delete = *stack;

	while (*stack)
	{
		delete = delete->next;
		free(*stack);
		*stack = delete;
	}
}
