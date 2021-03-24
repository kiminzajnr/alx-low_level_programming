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

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
