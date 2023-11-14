#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name- prints name, using ptr of function
 *
 * @name: string of name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || *f == NULL)
		return;
	(*f)(name);
}
