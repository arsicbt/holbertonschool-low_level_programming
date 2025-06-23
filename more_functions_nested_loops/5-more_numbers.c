#include "main.h"

/**
 * more_numbers - print 0 to 9
 *
 * Return: the number 0 to 9.
 */
void more_numbers(void)
{
	int num_list[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	int row;
	int num;

	for (row = 0; row < 10; row++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num_list[num] / 10) + '0');
			}
			_putchar((num_list[num] % 10) + '0');
		}
	_putchar('\n');
	}
}
