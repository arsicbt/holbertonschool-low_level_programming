#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', '\0'};
	int tebahpla;

	for (tebahpla = 25; tebahpla >= 0; tebahpla--)
	{
		putchar(alphabet[tebahpla]);
	}
	putchar('\n');
	return (0);
}
