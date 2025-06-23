#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	char i;
	char j;

	if (n > 1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
