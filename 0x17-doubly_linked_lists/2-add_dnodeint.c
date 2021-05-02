#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Pointer to address of first node.
 * @n: data to be added.
 * Return: Address of new element or NULL otherwise.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}
	newnode->n = n;
	newnode->next = *head;
	newnode->next->prev = newnode;
	newnode->prev = NULL;
	*head = newnode;

	return (newnode);
}
