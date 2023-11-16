#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - Prints all strings with separator
 * @n: number of strings passed
 * @separator: string to be printed between strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *ptr;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char*);
		if (ptr != NULL)
		{
			printf("%s", ptr);
		}
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		else if (ptr == NULL)
			printf("(nil)");
	}
	printf("\n");
}
