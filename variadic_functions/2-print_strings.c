#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string, followed by a new line.
 * @separator: separator of the strings
 * @n: charactere to print
 * Return: void
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *charactere;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		charactere = va_arg(list, char *);

		if (charactere == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", charactere);
		}

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(list);
	printf("\n");
}
