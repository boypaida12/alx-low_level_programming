#include "main.h"
#include "stdlib.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: pointer that contains copy of string
 * Return: Null if str == NULL
 * Null if insufficient memory was available
 * On Success returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		j++;

	s = malloc(sizeof(char) * (j + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];

	s[i] = '\0';

	return (s);
}
