#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: int factorial
 * Return: 1 if n is 0, -1 if n is < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
