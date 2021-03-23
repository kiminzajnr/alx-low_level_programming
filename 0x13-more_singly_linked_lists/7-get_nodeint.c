#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a linked list.
 *
 * @head: pointer to first elements.
 * @index: index of the nth node.
 * Return: return nth node of a linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *currentnode = head;

	for (count = 0; currentnode != NULL; count++)
	{
		if (count == index)
			return (currentnode);
		currentnode = currentnode->next;
	}
	return (NULL);
}
