#include <stdio.h>
/**
*main - entry point
*Return: always 0
*/
int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			putchar(x);
			putchar(y);
			if (x != 57 || y != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
