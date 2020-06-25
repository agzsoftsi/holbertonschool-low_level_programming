#include "monty.h"
/**
 * _verify2 - verify 2 function
 * @stack: head
 * @con: integer
 */
void _verify2(stack_t **stack, unsigned int con)
{
	if (_verify1(global.token) == 0)
		global.num = atoi(global.token);
	else
	{
		dprintf(2, "L%u: usage: push integer\n", con);
		free_l(stack);
		free(global.line);
		fclose(global.fil);
		exit(EXIT_FAILURE);
	}
}
