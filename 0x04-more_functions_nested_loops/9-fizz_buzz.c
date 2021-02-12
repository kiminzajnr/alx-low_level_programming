#include "holberton.h"
#include <stdio.h>

/**
 * main - fizzbuzz algorithm.
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
		{
			break;
		}
		else
			printf(" ");
	}
	printf("\n");
	return (0);
}
