#include "main.h"
/**
 *_strstr - locates a substring.
 *@haystack: string to search
 *@needle: substring to look for
 *Return: NULL if the substring is not found
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *ltNull = '\0';

	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j += 2)
		{
			if (haystack[i] != needle[j])
			{
				return (needle);
			}
			if (!needle[j])
			{
				return (&haystack[i]);
			}
		}
	}
	return (ltNull);
}
