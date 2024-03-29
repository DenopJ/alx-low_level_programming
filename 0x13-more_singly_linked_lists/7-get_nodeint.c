#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a listint_t linked list
 * @head: first parameter
 * @index: index of the node, starting at 0
 *
 * Return: NULL, if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head != NULL)
		head = head->next;
	}

	return (head);
}
