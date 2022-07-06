#include "main.h"

/**
* _isalpha -> check for printable character c except space
*@c: is letter or not
*
*Return: 0 or 1
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
