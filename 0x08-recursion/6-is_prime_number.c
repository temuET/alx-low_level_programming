#include "main.h"

int is_prime(int n, int i);

/**
*is_prime_number - evaluate if the number is prime or not
*@n: arg
*Return: 1 if it is prime
*/

int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
*is_prime - check whether it is prmire or not
*@n: arg
*@i: arg
*Return: 1 or 0
*/

int is_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (is_prime(n, i + 1));
}
