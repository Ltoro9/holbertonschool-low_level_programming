#include "main.h"
/**
 * _ayuda - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @i: base number to check
 * Return: natural square root of number base
 */
int _ayuda(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if ( i * i > n)
	{
		return (-1);
	}
	return (_ayuda(n, i + 1));

}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	return (_ayuda(n, 1));
}
