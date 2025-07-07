#include "main.h"
#include <stdlib.h>

/**
 * _strlen - check the len of an str.
 * @s: char *
 * Return: the len.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
**/
int **alloc_grid(int width, int height)
{
	int w, h;
	char *p_width, *p_height;
	int len_w, len_h;
	int **final_grid;

	if (width < 0 || heigth < 0)
	{
		return (NULL);
	}

	len_w, len_h = _strlen(width), _strlen(height);
	p_width = malloc(len_w * width);
	p_height = malloc(len_h * height);

	for (w = 0; w < len_w; w++)
	{
		p_width[w] = width;

		for (h = 0; h < len_h; h++)
		{
			p_height[h] = height;
		}
	}

	final_grid = p_width * p_height;
	return (final_grid);
}
