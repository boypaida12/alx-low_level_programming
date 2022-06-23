#include "main.h"
/**
 * str_len - Finds the string length
 * @s: The string to be measured
 * Return: length of string
 */
int str_len(char *s)
{
	int j = 0;

	if (*s != 0)
	{
		j++;
		return (j + str_len(s + j));
	}
	return (j);
}

/**
 * checker - Checks if string is palindrome
 * @s: String pointer to be checked
 * @j: Length of @s
 * @i: String array index
 * Return: 1 if string is palindrome and 0 if otherwise
 */
int checker(char *s, int j, int i)
{
	if (s[i] == s[j / 2])
	{
		return (1);
	}
	if (s[i] == s[j - i - 1])
	{
		return (checker(s, j, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to string to be checked
 * Return: 1 if string is palindrome, o if otherwise
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = str_len(s);

	if (!(*s))
		return (1);
	return (checker(s, j, i));
}
