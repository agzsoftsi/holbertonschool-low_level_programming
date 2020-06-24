#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index
 * @head: pointer to pointer
 * @index: index of node
 * Return: 1 if success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete, *move;
	unsigned int con = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	move = *head;
	while (move != NULL)
	{
		if (index == con + 1)
		{
			delete = move->next;
			move->next = delete->next;
			free(delete);
			return (1);
		}
		if (index == 0)
		{
			*head = move->next;
			free(move);
			return (1);
		}
		move = move->next;
		con++;
	}
	return (-1);
}
