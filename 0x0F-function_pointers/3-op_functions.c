#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns sums of two numbers
 * @a: input one
 * @b: input two
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts
 * @a: input 1
 * @b: input 2
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies
 * @a: input 1
 * @b: input 2
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: input 1
 * @b: input 2
 * Return: division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus
 * @a: input 1
 * @b: input 2
 * Return: the remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
