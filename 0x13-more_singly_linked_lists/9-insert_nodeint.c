#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 * at a given position.
 * @head: first parameter
 * @idx: second parameter
 * added.
 * @n: third parameter
 *
 * Return: address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *ptr;
	listint_t *temp;

	ptr = malloc(sizeof(listint_t));

	temp = *head;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && temp != NULL; x++)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL && idx != 0)
		return (NULL);


	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else
	{
		ptr->next = temp->next;
		temp->next = ptr;
	}

	return (ptr);
}
