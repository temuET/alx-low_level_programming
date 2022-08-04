#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*op_add - addition operation
*@a: first arg
*@b: second arg
*Return: result
*/
int op_add(int a, int b)
{

	return (a + b);
}
/**
*op_sub - subtraction operator
*@a: 1st arrg
*@b: 2nd arg
*Return: result
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul - mltiplication
*@a: 1st arg
*@b: 2nd arg
*Return: result
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div - devision op
*@a: 1st arg
*@b: 2nd arg
*Return: result
*/
int op_div(int a, int b)
{

	return (a / b);
}
/**
*op_mod - reminder
*@a: 1st arg
*@b:2nd arg
*Return: result
*/
int op_mod(int a, int b)
{
	return (a % b);
}
