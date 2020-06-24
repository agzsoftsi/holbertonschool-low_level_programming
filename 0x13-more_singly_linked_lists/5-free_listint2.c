#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *move;

	while (head != NULL && *head != NULL)
	{
		move = *head;
		*head = move->next;
		free(move);
	}
}
