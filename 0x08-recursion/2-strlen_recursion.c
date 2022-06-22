#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string length to be returned
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + i);
	}
	return (i);
}
