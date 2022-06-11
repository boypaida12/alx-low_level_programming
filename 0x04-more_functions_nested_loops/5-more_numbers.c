#include "main.h"
/**
 * more_numbers - prints the numbers 0 to 14
 * 10 times
 * followed by a new line
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, num;

	num = 0;

	for (i = 0; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
	_putchar('\n');
	}
}
