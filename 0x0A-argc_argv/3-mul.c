#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints its name, followed by new.
  * @argc: argument counter.
  * @argv: argument vector.
  * Return: 0, if error return 1.
  */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1 && (argc - 1) == 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
