#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: start of pointer
 * @str: string
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int con = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	for (con = 0; str[con] != '\0'; con++)
		;

	new->len = con;
	new->next = *head;

	*head = new;

	return (new);
}
