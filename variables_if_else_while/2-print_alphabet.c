#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz\0";
	char last_char = '{';
	char a = alphabet[0];

	while (a != last_char)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
