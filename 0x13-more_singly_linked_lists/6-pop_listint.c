#include "lists.h"
/**
 * pop_listint - function that deletes the head node & returns its data
 * @head: pointer to a pointer
 * Return: n, head's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;

	free(temp);
	return (n);
}
