#include "main.h"

/**
* *string_toupper - change lowercase to upper case
*@s: arg
*Return: string
*/

char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
