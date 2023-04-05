#include "lists.h"

/**
 * add_nodeint - A fucntion that adds a new node at the beginning
 * of a linked listint_t list
 * @head: first parameter
 * @n: second parameter
 *
 * Return: address of the new element or  NUll if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
