#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 * in a linked listint_t list.
 * @h: parameter
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num_ele = 0;

	while (h != NULL)
	{
		h = h->next;
		num_ele++;
	}
	return (num_ele);
}
