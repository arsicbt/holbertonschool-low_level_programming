#include "main.h"
#include <stdio.h>

/**
 * _puts - updates the value it points.
 * @str: string
 * Return: 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{

		_putchar(str[i]);
	}
	_putchar('\n');
}
