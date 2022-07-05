#include <stdio.h>
/**
*main - entry point
*Return: alway 0
*/
int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			putchar(x);
			putchar(y);
			putchar(32);
		}

		putchar(32);
		putchar(44);
	}
	putchar(10);
	return (0);
}
