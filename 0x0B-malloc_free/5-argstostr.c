#include "holberton.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of program.
 * @ac: argument counter.
 * @av: argument vector.
 * Return: NULL if ac == 0 or av == NULL else
 * pointer to a string of NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *str;

	length = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			length++;
			j++;
		}
		length++;
		i++;
	}
	str = malloc((sizeof(char) + length) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
