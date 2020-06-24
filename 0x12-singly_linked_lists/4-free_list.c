#include "lists.h"
#include <string.h>
/**
 * free_list - free memory
 * @head: pointer to type list_t
 */
void free_list(list_t *head)
{
	list_t *move;

	while (head != NULL)
	{
		move = head;
		head = move->next;
		free(move->str);
		free(move);
	}
}
