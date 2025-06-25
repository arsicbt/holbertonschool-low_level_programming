#include "main.h"

/**
 * print_triangle - print a triangle
 *@n: integer
 * Return: a triangle
 */
void print_triangle(int n)
{
	char i;
	char j;
	char k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < n - j + 1; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
