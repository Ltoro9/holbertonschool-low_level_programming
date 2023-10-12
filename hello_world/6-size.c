#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character
	int integer
	long int long_int
	long long int doble_long_int
	float floating

	printf("Size of char: %zu byte(s)\n", sizeof(character));
	printf("Size of int: %zu byte(s)\n", sizeof(integer));
	printf("Size of long int: %zu byte(s)\n", sizeof(long_int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(doble_long_int));
	printf("Size of float: %zu byte(s)\n", sizeof(floating));
	return (0);
}
