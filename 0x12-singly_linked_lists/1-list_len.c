#include "lists.h"

/**
 * list_len - A function returns the number of elements in a linked list_t list
 * @h: pointer to structure
 *
 * Return: length.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
