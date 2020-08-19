#include "holberton.h"

/**
 * _getenv - return pointer
 * @name: cotein string for search
 * Return: pointer to string
 */

char *_getenv(const char *name)
{
	unsigned int i;
	char *ret = NULL;
	int len;

	len = strlen(name);
	i = 0;
	while (__environ[i])
	{
		ret = strstr(__environ[i++], name);
		if (ret)
		{
			break;
		}
	}
	return (ret + len + 1);
}
