#include <stdio.h>
/**
*main - entry point
*Return: always 0 (Success)
*/
int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (x < y)
			{
				putchar(x / 10 + 48);
				putchar(x % 10 + 48);
				putchar(32);
				putchar(y / 10 + 48);
				putchar(y % 10 + 48);
				if (x != 98 || y != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
