#include "main.h"
/**
 * print_sign - check if the sign of n.
 * @n : number
 * Return: 1, 0 or -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('1');
		return (-1);
	}
}
