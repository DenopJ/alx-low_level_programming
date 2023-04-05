#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: parameter
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		head = head->next;
		free(temp);
	}
}
