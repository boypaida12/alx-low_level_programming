#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: integer a to be swapped
 * @b: integer b to be swapped
 * Return: int a and int b
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
