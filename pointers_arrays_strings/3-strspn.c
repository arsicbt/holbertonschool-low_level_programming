
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: the string containing accepted characters
 * Return: the number of characters in the initial segment of s
 *         which consist only of characters from accept
**/
unsigned int _strspn(char *s, char *accept)
{
	int charactere;
	int acpt_char;
	unsigned int count;
	int valid;
	count = 0;
	valid = 1;

	for (charactere = 0; s[charactere] != '\0' && valid == 1; charactere++)
	{
		int find = 0;

		for (acpt_char = 0; accept[acpt_char] != '\0'; acpt_char++)
		{
			if (s[charactere] == accept[acpt_char])
			{
				find = 1;
			}
		}
		if (find == 1)
		{
			count++;
		}
		else
		{
			valid = 0;
		}
	}
	return (count);
}
