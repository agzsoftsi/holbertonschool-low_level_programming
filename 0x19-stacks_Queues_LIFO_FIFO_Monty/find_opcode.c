#include "monty.h"

/**
 * func - pointers to functions
 * @tokens: arguments
 * Return: function
 */

void (*func(char *tokens))(stack_t **stack, unsigned int num_line)
{
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"stack", _stack},
		{"queue", _queue},
		{"err", _error},
		{"#", _nop},
		{NULL, NULL}
	};
	int i = 0;
	int opc;

	while (i < 19)
	{
		opc = strcmp(ops[i].opcode, tokens);
		if (opc == 0)
			return (ops[i].f);
		i++;
	}

	return (ops[17].f);
}
