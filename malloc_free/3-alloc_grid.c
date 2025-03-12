#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function to execute in the program
 * @width: First integrer
 * @height: Second integrer
 *
 * Return: Return NULL for failure of if width and height
 * are 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));

		if (grid[a] == NULL)
		{
			while (a > 0)
			{
				a--;
				free(grid[a]);
			}
			free(grid);
			return (NULL);
		}

		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}
