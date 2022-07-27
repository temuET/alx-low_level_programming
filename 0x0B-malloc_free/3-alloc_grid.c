#iclude "main.h"
#include <stdlib.h>

/**
*alloc_grid - 2D memory allocation
*@width: arg
*@height: arg
*Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int i, j, k, len;
	int **arr;

	if (width <= 0 ||  height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(arr[j]);
				free(arr);
				return (NULL);
			}
		}
	}
	for (k = 0; k < height; k++)
	{
		for (len = 0; len < width; len++)
		{
			arr[k][len] = 0;
		}
	}
	return (arr);
}
