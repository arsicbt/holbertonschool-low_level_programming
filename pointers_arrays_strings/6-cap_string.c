#include "main.h"

/**
 * cap_string - Change all firsts lettersof a word of a string to uppercase
 * @str: pointer to the input string
 *
 * Return: pointer to the modified string
**/
char *cap_string(char *str)
{
	int element;
	char separator[] = " \t\n,;.!?\"(){}";
	int sep_element;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	for (element = 0; str[element] != '\0'; element++)
	{
		for (sep_element = 0; separator[sep_element] != '\0'; sep_element++)
		{
			if (str[element] == separator[sep_element])
			{
				if (str[element + 1] >= 97 && str[element + 1] <= 122)
				{
					str[element + 1] -= 32;
				}
			}
		}
	}
	return (str);
}

