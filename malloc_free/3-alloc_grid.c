#include "main.h"
#include <stdlib.h>

/**
**/
int **alloc_grid(int width, int height)
{
	int h, w;
	int **p_height;
	int *p_width;

	w = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p_height = malloc(height * sizeof(int*));

	if (p_height == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		p_width = malloc(width * sizeof(int));

		if (p_width == NULL)
		{
			while (w < h)
			{
				free(p_height[w]);
				w++;
			}
			return (NULL);
			free(p_width);
		}
		p_height[h] = p_width;
	}
	return p_height;
}
