#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers and prints the result
 * @argc: argument count must be exactly two numbers
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int i, j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
