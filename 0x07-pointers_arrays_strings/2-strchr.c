#include "main.h"
/**
*_strchr - a function that locate a charactor in string
*@s: arg
*@c: arg
*Return: pointer s
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;

		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return ('\0');
}
