#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: print from int n
 */
void print_to_98(int n)
{
	int num1, num2;

	if (n <= 98)
	{
		for (num1 = n; num1 <= 98; num1++)
		{
			if (num1 != 98)
				printf("%d, ", num1);
			else if (num1 == 98)
				printf("%d\n", num1);
		}
	} else if (n >= 98)
	{
		for (num2 = n; num2 >= 98; num2--)
		{
			if (num2 != 98)
				printf("%d, ", num2);
			else if (num2 == 98)
				printf("%d\n", num2);
		}
	}
}
