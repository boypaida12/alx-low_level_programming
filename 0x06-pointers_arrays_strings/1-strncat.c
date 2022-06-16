#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: n bytes to be used
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
