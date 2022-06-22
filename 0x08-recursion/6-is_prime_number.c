#include "main.h"
/**
 * divis - checks if a number is divisible without a remainder
 * @i: number to be checked
 * @j: the divisor
 * Return: 0 if number is divisible without remainder,
 * 1 if otherwise
 */

int divis(int i, int j)
{
	if (i % j == 0)
		return (0);
	if (j == i / 2)
		return (1);

	return (divis(i, j + 1));
}
/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to be checked
 * Return: 0 if n is not a prime, 1 otherwise
 */

int is_prime_number(int n)
{
	int j = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (divis(n, j));
}
