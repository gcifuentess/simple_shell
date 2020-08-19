#include "holberton.h"

/**
 * split_for_argv - splits a string that can be used in argv
 * @str: string to be splited
 * @delimiter: string with the delimiter needed to split.
 *
 * Return: Array of pointers to the tokens.
 */
char **split_for_argv(char *str, char *delimiter)
{
	char **array, **array_temp;
	size_t i, j;

	for (i = 0; ; i++, str = NULL)
	{
		array_temp = (char **)malloc(sizeof(char *) * (i + 1));
		if (!array_temp)
		{
			if (array)
				free(array);
			return (NULL);
		}
		array_temp[i] = strtok(str, delimiter);

		for (j = 0; j < i; j++)
			array_temp[j] = array[j];
		if (i != 0)
			free(array);

		array = (char **)malloc(sizeof(char *) * (i + 1));
		if (!array)
		{
			free(array_temp);
			return (NULL);
		}

		for (j = 0; j <= i; j++)
			array[j] = array_temp[j];
		free(array_temp);

		if (!array[i])
			break;
	}
	return (array);
}
