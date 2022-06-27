#include <stdio.h>
/**
 * main - Prints the name of program
 * @argc: counts number of arguments passed during compilation
 * @argv: array of arguments during compilation
 * Return: ALways 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
