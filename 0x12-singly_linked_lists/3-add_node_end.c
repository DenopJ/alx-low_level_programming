#include "lists.h"

/**
 * add_node_end - Function adds a new node at the end of a list_t list
 * @head: first parameter
 * @str: second parameter
 *
 * Return: pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *temp;
	size_t x;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	for (x = 0; str[x]; x++)
		;

	add->len = x;
	add->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = add;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = add;
	}

	return (*head);
}
