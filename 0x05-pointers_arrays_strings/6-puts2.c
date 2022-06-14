#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * followed by a new line
 * @str: var to be printed
 * Return: Nothing
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
			_putchar(str[n]);
		else
			continue;
	}
	_putchar('\n');
}
