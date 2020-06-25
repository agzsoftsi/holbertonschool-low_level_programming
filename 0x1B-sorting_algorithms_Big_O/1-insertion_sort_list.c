#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: doubly linked list.
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *next_node_in_list;

	if (!list || !*list || !(*list)->next)
		return;

	curr = next_node_in_list = (*list)->next;

	while (next_node_in_list)
	{
		next_node_in_list = next_node_in_list->next;

		while (curr->prev && curr->n < curr->prev->n)
		{
			curr->prev->next = curr->next;

			if (curr->next)
				curr->next->prev = curr->prev;

			curr->next = curr->prev;
			curr->prev = curr->next->prev;
			curr->next->prev = curr;

			if (curr->prev)
				curr->prev->next = curr;
			else
				*list = curr;

			print_list(*list);
		}
		curr = next_node_in_list;
	}
}
