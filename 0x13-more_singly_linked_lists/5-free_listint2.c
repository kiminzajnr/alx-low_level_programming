#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: a pointer to a pointer to head.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	if (*head == NULL)
		return;
	node  = *head;
	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	*head = NULL;
}

