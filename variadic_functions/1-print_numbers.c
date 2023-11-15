#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != n - 1)
			printf("%d%s", va_arg(args, int), separator);
		
		else
			printf("%d", va_arg(args, int));
	}
	printf("\n");
}
