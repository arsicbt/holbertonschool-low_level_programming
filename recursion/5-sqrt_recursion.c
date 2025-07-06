#include "main.h"

int _sqrt_recursion(int n)
{
	static int y;
	int result;

	if (n < 0)
	{
		y = 0;
		return (-1);
	}
	if (y * y == n)
	{
		result = y;
		y = 0;
		return (result);
	}
	if (y * y > n)
	{
		y = 0;
		return (-1);
	}
	y++;
	return (_sqrt_recursion(n));
}
