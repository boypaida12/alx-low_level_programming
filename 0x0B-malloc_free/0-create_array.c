#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and inits
 * with a specific order
 * @size: size of memory allocated
 * @c: Character initialized to array created
 * Return: Null if size = 0,
 * pointer to the array or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(*ch) * size);
	if (ch)
	{
		for (i = 0; i <= size; i++)
			ch[i] = c;
		return (ch);
	}
	else
		return (NULL);
}
