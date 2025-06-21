#include "main.h"
/**
 * _abs - check the absolute value of n.
 * @n : number
 * Return: the absolute value.
 */
int _abs(int n)
{
	int neg_to_pos;

	if (n > 0)
	{
		return (n);
	}
	else
	{
		neg_to_pos = n * -1;
		return (neg_to_pos);
	}
}
