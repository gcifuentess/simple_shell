#include "holberton.h"

/**
 * _getenv - return pointer
 * @name: cotein string for search
 * Return: pointer to string
 */

char *_getenv(char *name)
{
	unsigned int i;
	char *ret = NULL;
	int len;

	len = _strlen(name);
	i = 0;
	while (environ[i])
	{
		ret = _strstr(environ[i++], name);
		if (ret)
		{
			break;
		}
	}
	_printf("Estamos en _getenv\n");
	_printf("%s\n", ret);
	return (ret + len + 1);
}
