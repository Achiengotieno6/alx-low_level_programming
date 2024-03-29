#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function definition
 * @grid: a 2D array
 * @height: the height of the array
 * Description: free up memory occupied
 * by a 2D array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
