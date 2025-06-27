#include "main.h"
#include <stdio.h>

/**
**/
char *_strcpy(char *dest, char *src)
{
	int charactere;

	for (charactere = 0; charactere < src[charactere - 1]; charactere++)
	{
		dest[charactere] = src[charactere];
	}
	return dest;
}
