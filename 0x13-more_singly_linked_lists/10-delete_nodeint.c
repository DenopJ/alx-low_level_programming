#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at index
 * index of a listint_t linked list.
 * @head: first parameter
 * @index: second parameter
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *temp;
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}

	temp = *head;

	for (x = 0; x < index - 1; x++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);
	return (1);

}
