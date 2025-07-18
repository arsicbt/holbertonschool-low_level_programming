#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * sum_them_all - do the sum of n
 * @n: number
 * Retrun: the sum
**/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	int sum;
	unsigned int i;

	sum = 0;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
