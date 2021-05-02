#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_dnodeint_end - Adds a new node at end.
 * @head: Pointer to first node.
 * @n: data.
 * Return: address of the new element, else NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

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
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	newnode->n = n;
	temp->next = newnode;
	newnode->prev = temp;
	newnode->next = NULL;
	return (newnode);
}
