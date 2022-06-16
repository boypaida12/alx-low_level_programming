#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: input string
 * Return: caps on first letter of a separator
 */

char *cap_string(char *n)
{
	int i = 0;
	int c = 0;

	while (*(n + i))
	{
		if (*(n + i) == ',' || *(n + i) == ';' || *(n + i) == '.'
		|| *(n + i) == '!' || *(n + i) == '?' || *(n + i) == '"'
		|| *(n + i) == '(' || *(n + i) == ')' || *(n + i) == '\n'
		|| *(n + i) == '{' || *(n + i) == '}' || *(n + i) == ' '
		|| *(n + i) == '\t')
			c = 1;
		else if (*(n + i) >= 'a' && *(n + i) <= 'z' && (c == 1 || i == 0))
		{
			*(n + i) -= 32;
			c = 0;
		}
		else
		{
			c = 0;
		}
		i++;
	}
	return (n);
}
