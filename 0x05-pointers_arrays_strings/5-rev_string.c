#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string input to be reversed
 * Return: string reverse
 */

void rev_string(char *s)
{
	char rev;
	int i, n, n1;

	n = 0;
	n1 = 0;

	while (s[n] != '\0')
		n++;

	n1 = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		rev = s[i];
		s[i] = s[n1];
		s[n1] = rev;
		n1 -= 1;
	}
}
