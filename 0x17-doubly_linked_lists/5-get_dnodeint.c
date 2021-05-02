#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *get_dnodeint_at_index - returns nth node of a doubly linked list.
 * @head: pointer to first node.
 * @index: index of the node, starting from 0.
 * Return: nth node or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;
	dlistint_t *currentNode;

	currentNode = head;
	for (counter = 0; currentNode != NULL; counter++)
	{
		if (counter == index)
			return (currentNode);
		currentNode = currentNode->next;
	}
	return (NULL);
}
