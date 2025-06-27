#include "main.h"
#include <stdio.h>
/**
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
