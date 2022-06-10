#include "main.h"
/**
 * _isupper - checks fo uppercase character
 * @c: int to be checked
 * Return: 1 if c is uppercase
 * 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
