#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *@n: integer
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	char i;
	char j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar('A');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
