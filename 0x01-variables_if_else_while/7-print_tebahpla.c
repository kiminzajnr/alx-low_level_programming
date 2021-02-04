#include <stdio.h>

/**
   * main - prints alphabet in reverse
   *
   * Return: zero
   */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
