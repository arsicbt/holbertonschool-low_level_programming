#include "main.h"

/**
 * print_rev - reverse an str
 * @s: string
 * Return: the reversed char
 */
void print_rev(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	len = i;

	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
