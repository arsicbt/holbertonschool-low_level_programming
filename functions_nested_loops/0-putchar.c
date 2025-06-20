#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char putchar_charactere[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(putchar_charactere[i]);
	}
	return (0);
}
