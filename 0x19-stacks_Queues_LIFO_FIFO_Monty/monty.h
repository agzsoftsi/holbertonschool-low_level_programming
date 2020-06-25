#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * struct globals - variables globales
 * @num: integer
 * @flag: integer
 * @line: string
 * @token: string
 * @opcod: function opcode in Monty
 * @fil: file
 */
typedef struct globals
{
int num;
int flag;
char *line;
char *token;
char *opco;
FILE *fil;
} globals_t;

extern globals_t global;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void _mod(stack_t **stack, unsigned int num_line);
void _pchar(stack_t **stack, unsigned int num_line);
void _rotr(stack_t **stack, unsigned int num_line);
void _rotl(stack_t **stack, unsigned int num_line);
void _stack(stack_t **stack, unsigned int num_line);
void _queue(stack_t **stack, unsigned int num_line);
void _pstr(stack_t **stack, unsigned int num_line);
void _mul(stack_t **stack, unsigned int num_line);
void _verify2(stack_t **stack, unsigned int n);
void _error(stack_t **stack, unsigned int n);
void free_l(stack_t **stack);
void _div(stack_t **stack, unsigned int num_line);
void _sub(stack_t **stack, unsigned int num_line);
void _nop(stack_t **stack, unsigned int num_line);
int _verify1(char *num);
int _size_line(char *line);
char delete_jump(char *line);
void _swap(stack_t **stack, __attribute__((unused)) unsigned int num_line);
void _add(stack_t **stack, __attribute__((unused)) unsigned int num_line);
void _pint(stack_t **stack, unsigned int num_line);
void _pop(stack_t **stack, unsigned int num_line);
void (*func(char *tokens))(stack_t **stack, unsigned int num_line);
int main(__attribute__((unused)) int argc, char **argv);
void _pall(stack_t **stack, unsigned int num_line);
void _push(stack_t **stack, unsigned int num_line);

#endif
