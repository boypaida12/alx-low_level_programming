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
	while (num < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		num++;
	}
}
