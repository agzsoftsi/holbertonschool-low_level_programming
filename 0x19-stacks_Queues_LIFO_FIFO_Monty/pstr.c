#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack
 * @stack: head
 * @num_line: num line
 */
void _pstr(stack_t **stack, unsigned int num_line)
{
	stack_t *temp;

	temp = *stack;
	if (num_line)
		while (temp && temp->n != 0 && temp->n > 0 && temp->n < 128)
		{
			printf("%c", temp->n);
			temp = temp->next;
		}
	printf("\n");
}
