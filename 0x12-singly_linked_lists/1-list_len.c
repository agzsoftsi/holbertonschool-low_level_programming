#include "lists.h"
/**
 * list_len -  prints all the elements of a list_t list
 * @h: element of the structure
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t con = 0;
	const list_t *move = h;

	if (h == NULL)
		return (0);

	while (move != NULL)
	{
		move = move->next;
		con++;
	}
	return (con);
}
