#include <unistd.h>
/**
*_putchar - writes the charector c to stdout
*@c: The charactor to print
*
*Return: on success 1
*on error, -1 is returend, and error is set appropratly
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
