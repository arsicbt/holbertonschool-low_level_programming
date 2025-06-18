#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *min_alphabet = "abcdefghijklmnopqrstuvwxyz\0";
	char *maj_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
	char last_char_min = '{';
	char last_char_maj = '[';
	char a = min_alphabet[0];
	char b = maj_alphabet[0];

	while (a != last_char_min)
	{
		putchar(a);
		a++;
	}
	while (b != last_char_maj)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
