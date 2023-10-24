#include "main.h"
/**
 *rev_string - reverses a string.
 *
 *@s: string to be printed
 */
void rev_string(char *s)
{
	int i, l, t;
	char temp; 

	l = 0;
	t = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	t = l - 1;
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[t];
		s[t] = temp;
	}

}
