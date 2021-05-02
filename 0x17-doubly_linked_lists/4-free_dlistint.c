#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Free a doubly linked list.
 * @head: pointer to first element.
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
