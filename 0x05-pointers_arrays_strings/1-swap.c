#include "main.h"

/**
*swap_int -swap values of the two integer
*@a: pointer parameter
*@b: pointer parameter
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
