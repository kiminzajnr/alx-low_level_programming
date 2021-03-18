#include <stdlib.h>
#include "lists.h"

/**
  * list_len - return number of elements in a linked list.
  * @h: pointer to structure.
  * Return: number of elements in list_t list
  */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int elements_counter = 0;

	while (temp != NULL)
	{
		elements_counter++;
		temp = temp->next;
	}
	return (elements_counter);
}
