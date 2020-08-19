#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: is the destination pointer
 * @src: is the source pointer
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0';) /*just increment i*/
		i++;
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
