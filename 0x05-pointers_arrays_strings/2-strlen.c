#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string length to be returned
 * Return: string length
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len(s));
}
