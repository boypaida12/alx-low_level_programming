#include <stdio.h>
/**
 * main - prints the number of arguments passed into program
 * followed by a new line
 * @argc: counts the number of arguments passed during compilation
 * @argv: array of arguments passed during compilation
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
