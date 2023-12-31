#include <stdio.h>
/**
  * _ayuda - checks recursively the input from is_prime_number
  * @n: iterator
  * @i: base number to check
  * Return: 1 if n is a prime, else return 0
  */
int _ayuda(int n, int i)
{
	if (i % n == 0 || i < 2)
		return (0);
	else if (n == i - 1)
		return (1);
	else if (i > n)
		return (_ayuda(n + 1, i));
	return (1);
}
/**
  * is_prime_number - checks if the number is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime, else return 0
  */
int is_prime_number(int n)
{
	return (_ayuda(2, n));
}
