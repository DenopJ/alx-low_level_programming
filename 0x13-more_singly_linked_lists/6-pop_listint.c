#include "lists.h"

/**
 * pop_listint - A function that deletes the head node
 * of a listint_t list
 * @head: parameter
 *
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);

	ptr = *head;

	*head = ptr->next;
	n = ptr->n;
	free(ptr);
	return (n);
}
