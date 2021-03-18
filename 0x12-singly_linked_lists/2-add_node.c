#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * *add_node - adds a new node at the beginning of a list_t list.
  * @head: pointer to first elements.
  * @str: string.
  * Return: the address of the new elements,
  * or NULL if it failed.
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = string_length(str);
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
/**
  * string_length - finds the length of a string.
  * Return: length of c.
  * @pointer: pointer.
  */
int string_length(const char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
