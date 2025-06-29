#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: pointer to the input string
 *
 * Return: pointer to the modified string
**/
char *leet(char *str)
{
	int element_l;
	int element_n;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (element_l = 0; str[element_l] != '\0'; element_l++)
	{
		for (element_n = 0; letters[element_n] != '\0'; element_n++)
		{
			if (str[element_l] == letters[element_n])
			{
				str[element_l] = numbers[element_n];
			}
		}
	}
	return (str);
}
