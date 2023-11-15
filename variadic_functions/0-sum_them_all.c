#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- returns the sum of all its parameters
 * @n: number of arguments passed
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;

	va_list args;
	va_start(args, n);

	result = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		result += va_arg(args, int);

	va_end(args);

	return (result);

}
