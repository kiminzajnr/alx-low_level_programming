#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
  * binary_search - searches for a value in an array of integers using
  * the binary search algorithm
  * assumes that the array is sorted in asc order
  * also assumes that value won't appear twice in the array
  * prints the array being searched every time it changes.
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: return index of value, if value is not present in array or
  * if array is NULL, returns -1
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t lowerbound = 0;
	size_t upperbound = size - 1;
	size_t midpoint = -1;
	int index = -1;

	if (array == NULL)
		return (-1);
	while (lowerbound <= upperbound)
	{
		midpoint = lowerbound + (upperbound - lowerbound) / 2;
		printf("Searching in array: ");
		for (i = lowerbound; i <= upperbound; i++)
		{
			if (i == upperbound)
			{
				printf("%d\n", array[upperbound]);
				break;
			}
			printf("%d, ", array[i]);
		}
		if (array[midpoint] == value)
		{
			index = midpoint;
			break;
		}
		else
		{
			if (array[midpoint] < value)
			{
				lowerbound = midpoint + 1;
			}
			else
			{
				upperbound = midpoint - 1;
			}
		}
	}
	return (index);
}
