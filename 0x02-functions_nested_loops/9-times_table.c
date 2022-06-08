#include "main.h"
/**
 * time_table - prints the 9 times table
 * starting with 0
 */
void time_table(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			num3 = num2 * num1;
			if (num2 == 0)
			{
				_putchar(num3 + '0');
			}
			if (num3 < 10 && num2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num3 + '0');
			} else if (num3 >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((num3 / 10) + '0');
				_putchar((num3 % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

