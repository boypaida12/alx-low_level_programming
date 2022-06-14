#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: input to be reversed
 * Return: reversed string
 */

void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
