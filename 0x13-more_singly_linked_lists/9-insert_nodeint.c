#include <stdlib.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to a pointer to head
 * @idx: index of the list where the new node should be added.
 * @n: element to insert.
 * Return: address of the new node, NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *newnode;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->n = n;
		temp->next = NULL;
	}
	for (i = 0; temp->next != NULL && i < idx - 1; i++)
	{
		temp = temp->next;
	}
	if (temp->next == NULL)
	{
		newnode->n = n;
		temp->next = newnode;
		newnode->next = NULL;
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	if (newnode == NULL)
		return (NULL);
	return (newnode);
}
