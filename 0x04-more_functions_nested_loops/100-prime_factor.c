#include <stdio.h>
/**
 * main- Finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int num1, num2 = 612852475143;

	for (i = 3; i < 782849; i++)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%ld\n", n);
	return (0);
}
