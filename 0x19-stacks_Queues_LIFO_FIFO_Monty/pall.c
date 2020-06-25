#include "monty.h"

/**
 * _pall - prints all the values on the stack,
 * starting from the top of the stack
 * @stack: head
 * @num_line: num linea
 */
void _pall(stack_t **stack, unsigned int num_line)
{
	stack_t *temp;

	temp = *stack;
	if (num_line)
		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
}
