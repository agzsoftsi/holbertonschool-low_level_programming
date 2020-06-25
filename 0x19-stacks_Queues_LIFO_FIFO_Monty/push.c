#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @stack: head
 * @num_line: number line
 */
void _push(stack_t **stack, unsigned int num_line)
{
	stack_t *temp;

	_verify2(stack, num_line);
	if (global.token)
	{
		temp = malloc(sizeof(stack_t));
		if (temp == NULL)
		{
			fputs("Error: malloc failed\n", stderr);
			exit(EXIT_FAILURE);
		}
		temp->n = global.num, temp->next = NULL;
		temp->prev = NULL;
		if (*stack)
		{
			if (global.flag == 1)
			{
				temp->next = *stack;
				(*stack)->prev = temp;
				*stack = temp;
			}
			else
			{
				while ((*stack)->next)
					*stack = (*stack)->next;
				(*stack)->next = temp, temp->prev = *stack;
				while ((*stack)->prev)
					*stack = (*stack)->prev;
			}
		}
		else
			*stack = temp;
	}
	else
	{
		free(global.line), fclose(global.fil);
		dprintf(2, "L%u: usage: push integer\n", num_line);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
