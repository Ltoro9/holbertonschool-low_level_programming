#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string 
 *
 * Return: return value of string;
 */
char *leet(char *s)
{
	int i, t;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)

	{
		for (t = 0; t < 10; t++)

		{
			if (s[i] == a[t])
			{
				s[i] = b[t];
			}
		}
	}

	return (s);
}
