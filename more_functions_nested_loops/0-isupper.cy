#include "main.h"
/**
 * _isupper - check if is upper.
 * @c : index
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar('1');
		_putchar('\n');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar('0');
		_putchar('\n');
		return (0);

	}
}
