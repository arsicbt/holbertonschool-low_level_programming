#include "main.h"
/**
 * _isupper - check if is upper.
 * @c : index
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else if (c >= 97 && c < 122)
	{
		return (0);

	}
	else
	{
		return (0);
	}
}
