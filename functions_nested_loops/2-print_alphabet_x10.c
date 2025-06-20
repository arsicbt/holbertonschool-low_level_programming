#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
	'x', 'y', 'z', '\n'};
	int i;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i < 27; i++)
		{
			_putchar(alphabet[i]);
		}
	}
	return (0);
}
