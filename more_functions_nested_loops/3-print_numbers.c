#include "main.h"

/**
 * print_numbers - print 0 to 9
 *
 * Return: the number 0 to 9.
 */
void print_numbers(void)
{
	int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(num[n] + '0');
	}
	_putchar('\n');
}
