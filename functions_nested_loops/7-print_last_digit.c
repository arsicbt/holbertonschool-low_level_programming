#include "main.h"
/**
 * print_last_digit - find the last digit of n.
 * @n : number
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	int neg_to_pos;

	if (last_digit < 0)
	{
		neg_to_pos = last_digit * -1;
		_putchar('0' + neg_to_pos);
		return (neg_to_pos);
	}
	else
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
