#include <stdio.h>
/**
*main - entry point
*Return: always 0
*/
int main(void)
{
	int ch, CH;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (CH = 65; CH <= 90; CH++)
	{
		putchar(CH);
	}
	putchar(10);
	return (0);
}
