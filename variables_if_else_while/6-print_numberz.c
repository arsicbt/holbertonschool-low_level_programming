#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(num[i] + '0');
	}
	putchar('\n');
	return (0);
}
