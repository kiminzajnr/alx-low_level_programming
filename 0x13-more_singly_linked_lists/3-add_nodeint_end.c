#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a linked list.
 *
 * @head: pointer to a pointer to head.
 * @n: new elements data.
 * Return: address of new element, NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
