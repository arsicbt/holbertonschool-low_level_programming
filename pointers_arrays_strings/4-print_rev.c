#include "main.h"

/**
 * print_rev - reverse an str
 * @s: string
 * Return: the reversed char
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = len - 1; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
