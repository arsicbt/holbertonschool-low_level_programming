#include "main.h"

/**
 * print_most_numbers - print 0 to 9, except 2 and 4
 *
 * Return: the number 0 to 9.
 */
void print_most_numbers(void)
{
	int num_list[] = {0, 1, 3, 5, 6, 7, 8, 9};
	int num;

	for (num = 0; num < 8; num++)
	{
		_putchar(num_list[num] + '0');
	}
	_putchar('\n');
}
