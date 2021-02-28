#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - prints its name, followed by new.
  * @argc: argument counter.
  * @argv: argument vector.
  * Return: zero.
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("%d\n", argc - 1);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
