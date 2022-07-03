#include <stdio.h>
/**
*main - entry point
*Return: always 0
*/
int main(void)
{
	int x;
	char ch;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
