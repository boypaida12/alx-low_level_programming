#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of two int args passed during comp
 * @argc: counts the number of arguments passed during compilation
 * @argv: array of arguments passed during compilation
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
