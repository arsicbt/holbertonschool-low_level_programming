#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz\0";
	char a  = alphabet[0];
	char last_char = '{';

	while (a != last_char)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
