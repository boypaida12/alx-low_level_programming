#include <stdio.h>
/**
 * main - Prints the number of arguments passed into program
 * @argc: counts the arguments passed during compilation
 * @argv: array of arguments passed during compilation
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
