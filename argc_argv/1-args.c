#include <stdio.h>
/**
 *main - program that prints the number of arguments passed into it
 *@argc: counter
 *@argv: value
 *
 *Return: value 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;

	return (0);
}
