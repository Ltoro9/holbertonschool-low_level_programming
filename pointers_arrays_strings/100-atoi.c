#include "main.h"
/**
 *_atoi - convert a string to an integer.
 *
 *@s: string to be printed
 *Return: string converted
 */
int _atoi(char *s)
{
	int i, l, t, p, r;

	i = 0;
	l = 0;
	t = 0;
	r = 0;
	p = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && r == 0)
	{
		if (s[i] == '-')
			p++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			t = t * 10 + (s[i] - '0');
			r = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			r = 0;
		}
		i++;
	}

	if (r == 0)
	return (0);

	return (t);
}
