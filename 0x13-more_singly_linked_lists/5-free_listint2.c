#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: parameter
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *ptr;

	ptr = *head;
	temp = ptr;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			ptr = ptr->next;
			free(temp);
		}
		*head = NULL;
	}
}
