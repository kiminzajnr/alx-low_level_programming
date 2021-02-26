#include <stdio.h>

/**
  * main - prints its name, followed by new.
  * @argc: argument counter.
  * @argv: argument vector.
  * Return: zero.
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
