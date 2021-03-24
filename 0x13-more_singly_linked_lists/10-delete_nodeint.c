#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 *
 * @head: pointer to pointer to head.
 * @index: position of the node to be deleted.
 * Return: return 1 if success, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *next;

	/* if linked list is empty */
	if (*head == NULL)
		return (-1);

	temp = *head;
	/* if head needs to be removed */
	if (index == 0)
	{
		*head = temp->next; /* change head */
		free(temp); /* free old head */
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}
	/* if index is greater than the number of nodes */
	if (temp == NULL || temp->next == NULL)
		return (-1);
	next = temp->next->next;

	free(temp->next);
	temp->next = next;
	return (1);
}
