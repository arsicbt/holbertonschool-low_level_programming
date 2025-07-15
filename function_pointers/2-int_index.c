#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to the index of the array
 * @size: numbers of element in the array
 * @cmp: pointer to the comparaisons functions
 * Return: the integer find
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (size != 0 || array != NULL || cmp != NULL)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}

