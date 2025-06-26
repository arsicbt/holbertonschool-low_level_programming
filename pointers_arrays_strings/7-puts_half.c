#include "main.h"

/**
 * _strlen - check the len of an str.
 * @s: char *
 * Return: the len.
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

/**
**/
void puts_half(char *str)
{
	int len = _strlen(str);
	int n = (len + 1) / 2;
	int half = len / 2;
	int i;
	int j;

	if (len % 2 != 0)
	{
		for (i = n; i < str[i - 1]; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (j = half; j < str[j - 1]; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
