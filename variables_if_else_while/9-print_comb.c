#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number[] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n";
	int i;

	for (i = 0; number[i] != '\0'; i++)
	{
		putchar(number[i]);
	}
	return (0);
}
