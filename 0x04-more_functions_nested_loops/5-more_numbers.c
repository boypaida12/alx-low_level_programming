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
	while (b < 10)
	{
		a = 0;
		while (a < 15)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;
		}
		_putchar('\n');
		b++;
	}
}
