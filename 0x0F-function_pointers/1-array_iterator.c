#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given as a
 * parameter on each elelement of an array.
 * @array: the array.
 * @size: size of the array.
 * @action: function pointer.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a = size;
	int i;

	if (array && (size > 0) && action)
		for (i = 0; i < a; i++)
		{
			(action)(array[i]);
		}
}
