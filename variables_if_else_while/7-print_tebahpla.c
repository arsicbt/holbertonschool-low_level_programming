#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	char *tebahpla = alphabet;

	while (tebahpla >= alphabet)
	{
		putchar(*tebahpla);
=======
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', '\0'};
	int tebahpla;

	for (tebahpla = 25; tebahpla >= 0; tebahpla--)
	{
		putchar(alphabet[tebahpla]);
>>>>>>> fc13bfa (7)
	}
	putchar('\n');
	return (0);
}
