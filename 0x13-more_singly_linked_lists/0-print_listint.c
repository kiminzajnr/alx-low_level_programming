#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 *
 * @h: pointer to head.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int counter = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
