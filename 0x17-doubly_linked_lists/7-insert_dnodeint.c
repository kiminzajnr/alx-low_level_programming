#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *insert_dnodeint_at_index - inserts new node at given position.
 * @h: pointer to first element.
 * @idx: index where new node should be added.
 * @n: data to be added.
 * Return: address of new node or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int counter;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (*h == NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
		return (newnode);
	}

	temp = *h;
	for (counter = 0; counter < idx - 1; counter++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	newnode->n = n;
	newnode->next = temp->next;
	temp->next->prev = newnode;
	temp->next = newnode;
	newnode->prev = temp;

	return (newnode);
}
