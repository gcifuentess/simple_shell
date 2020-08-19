#include "holberton.h"

/**
 * print_env - prints de enviroment
 *
 * Return: Void
 */
void print_env(void)
{
	int i = 0;

	while (__environ[i])
	{
		_printf("%s\n", __environ[i++]);
	}
}
