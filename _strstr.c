#include "holberton.h"

/**
 * _strstr -  locates a substring.
 * @haystack: char string
 * @needle: char string
 * Return:  pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int f;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (f = i, j = 0; needle[j] != '\0'; j++, f++)
		{
			if (needle[j] != haystack[f] || haystack[f] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
