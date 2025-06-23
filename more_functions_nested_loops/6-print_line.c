#include "main.h"

/**
 * print_line - check the number of lines
 *
 * Return: a line.
 */
void print_line(int n)
{
	char l;

	if (n > 1)
	{
		for (l = 0; n--; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
