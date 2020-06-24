#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of listint_t list
 * @head: pointer to a pointer
 * @n: takes in an int
 * Return: pointer to the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *move;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	move = *head;

	while (move->next != NULL)
	{
		move = move->next;
	}

	move->next = new;
	return (new);
}
