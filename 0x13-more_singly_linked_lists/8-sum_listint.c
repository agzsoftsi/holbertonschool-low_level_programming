#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of the linked list
 * @head: takes in a struct type pointer *head
 * Return: returns the sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *move;
	unsigned int add = 0;

	move = head;

	while (move != NULL)
	{
		add += move->n;
		move = move->next;
	}
	return (add);
}
