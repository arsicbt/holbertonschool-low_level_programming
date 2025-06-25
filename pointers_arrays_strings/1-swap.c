#include "main.h"

/**
 * swap_int - swap the value of a and b.
 * @a: pointer a
 * @b: pointer b
 * Return: a and b values.
 */
void swap_int(int *a, int *b)
{
	int stock_a;

	stock_a = *a;
	*a = *b;
	*b = stock_a;
}
