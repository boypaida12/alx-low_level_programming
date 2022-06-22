#include "main.h"
/**
 * sqrt_num - finds the square root of a number
 * @b: The number to find the square root of
 * @a: the square root
 * Return: The square root, -1 if @b is not a natural square
 */

int sqrt_num(int b, int a)
{
	if ((a * a) == b)
		return (a);
	if (a == b / 2)
		return (-1);
	return (sqrt_num(b, a + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to return the square root of
 * Return: the square root of n, -1 if n does not have a natural square
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_num(n, i));
}
