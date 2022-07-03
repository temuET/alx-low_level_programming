#include <stdio.h>
/**
*main - entry point
*Return: alwas 0
*/
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch != 101 && ch != 113)
		{
			putchar(ch);
		}
	}
	putchar(10);
	return (0);
}
