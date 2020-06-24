#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 * @head: pointer to a pointer
 * @n: takes in an integer
 * Return: pointer to the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
