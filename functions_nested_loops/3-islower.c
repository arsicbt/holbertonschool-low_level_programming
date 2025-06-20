#include "main.h"
/**
 * _islower - check if is lower.
 * @c : index
 * Return: 1 or 0.
 */
int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
