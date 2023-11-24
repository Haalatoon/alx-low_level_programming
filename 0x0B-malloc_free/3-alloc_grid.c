#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		arr[i] = malloc(width * sizeof(char));
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
	free(arr);
}
