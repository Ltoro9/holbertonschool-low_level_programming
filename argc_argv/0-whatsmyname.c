#include <stdio.h>
/**
 *main - program that prints its name, followed by a new line.
 *@argc: variable
 *@argv: value of string
 *Return: value 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
