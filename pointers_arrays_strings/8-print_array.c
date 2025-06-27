#include "main.h"
#include <stdio.h>
/**
 * print_array - print un array
 * @a: array
 * @n: length
 * Return: an array
**/
void print_array(int *a, int n)
{
	int element;

	for (element = 0; element < n; element++)
	{
		printf("%d", a[element]);
		if (element < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
