#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: element
 * Return: the rversed array.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	char temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
