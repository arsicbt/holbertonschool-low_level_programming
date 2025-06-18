#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	char *tebahpla = alphabet;

	while (tebahpla >= alphabet)
	{
		putchar(*tebahpla);
	}
	putchar('\n');
	return (0);
}
