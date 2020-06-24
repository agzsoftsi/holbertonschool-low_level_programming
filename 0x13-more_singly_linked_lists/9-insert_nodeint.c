#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer
 * @idx: takes in the index
 * @n: takes in an integer
 * Return: NULL if function fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *move;
	unsigned int con = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	move = *head;

	while (move != NULL)
	{
		if (con + 1 == idx)
		{
			new->next = move->next;
			move->next = new;
			return (new);
		}
		con++;
		move = move->next;
	}
	free(new);
	return (NULL);
}
