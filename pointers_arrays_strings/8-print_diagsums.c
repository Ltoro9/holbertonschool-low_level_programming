#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i, sum;
	
	i = 0;
	sum = 0;
	for (i = 0; i < size; i++)
	
	{
		sum += (a[size * i + i]);
	}
	printf ("%d\n", sum);
}
