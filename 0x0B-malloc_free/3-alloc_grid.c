#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array.
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL on failure of width/height is 0 or -ve
 * else Return pointer to a 2D array.
 */
int **alloc_grid(int width, int height)
{
	int i, j, row, column;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(height * sizeof(int *));
	if (p == 0)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == 0)
		{
			for (j = 0; j <= i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
			p[row][column] = 0;
	}
	return (p);
}
