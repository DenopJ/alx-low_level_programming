#include "lists.h"

/**
 * add_node - Function adds new node at begining of list_t list
 * @head: first parameter
 * @str: second parameter
 *
 * Return: pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int length = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	ptr->len = length;
	if (*head != NULL)
		ptr->next = *head;
	if (*head == NULL)
		ptr->next = NULL;
	*head = ptr;
	return (*head);
}
