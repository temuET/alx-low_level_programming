#include "main.h"

/**
* *string_toupper - change lowercase to upper case
*@s: arg
*Return: string
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i++])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
