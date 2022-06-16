#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: input string
 * Return: caps on first letter of a separator
 */

char *cap_string(char *n)
{
	int h, i;
	int j = ' ';
	int k[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[1] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - ' ';
		}

		j = 0;

		for (h = 0; h <= 12; h++)
		{
			if (n[i] == k[h])
			{
				h = 12;
				j = 32;
			}
		}
	}
	return (n);
}
