#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 *
 * @head: pointer to a pointer to head
 * Return: head nodes data.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	temp->next = NULL;
	free(temp);
	return (data);
}
