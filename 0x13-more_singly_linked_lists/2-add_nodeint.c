#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint - adds a new node at beginning of a linked list.
 *
 * @head: pointer to pointer to head.
 * @n: data to add.
 * Return: address of the new elements, NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (*head == NULL)
		newnode = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
