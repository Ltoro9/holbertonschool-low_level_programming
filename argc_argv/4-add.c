#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that adds positive numbers
 *@argc: counter
 *@argv: pointer value
 *Return: return 0 if is succesful, if not return 1 error.
 */

int main(int argc, char *argv[])
{
	int i, result;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	result = 0;
	for (i = 1; i < argc; i++)
	{
		char *endptr;
		int j = strtol(argv[i], &endptr, 10);

		if (*endptr < 0 || *endptr != '\0')
		{
		printf("Error\n");
		return (1);
		}

	result += j;

	}

	printf("%d\n", result);

	return (0);
}
