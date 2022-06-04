#include <stdio.h>
/**
 * main- prints the alphabet letters in lowercase
 * followed by a new line
 * except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	putchar('\n');
	return (0);
}
