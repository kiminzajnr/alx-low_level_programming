#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *
 * @h: pointer to the first node
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
