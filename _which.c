#include "holberton.h"

/**
 * _which - finds the pathname of a filename in th PATH
 * @filename: the name of the file to find in the PATH
 *
 * Return: a pointer to the pathname or NULL.
 */
char *_which(char *filename)
{
	unsigned int j, total_len, len_filename;
	struct stat st;
	char *pathname = NULL, *needle = "PATH";
	char **tokens = NULL;

	if (filename)
		tokens = split_for_argv(_getenv(needle), ":");
	else
		return (pathname);
	len_filename = _strlen(filename);
	for (j = 0; tokens[j]; j++)
	{
		total_len = len_filename  + _strlen(tokens[j]) + 2;
		pathname = malloc(sizeof(char) * total_len);
		if (!pathname)
		{
			free(tokens);
			return (pathname);
		}
		pathname[0] = '\0';
		if (_getenv(needle)[0] == ':' && j == 0)
			_strcat(pathname, ".");
		else
			_strcat(pathname, tokens[j]);
		_strcat(_strcat(pathname, "/"), filename);
		if (lstat(pathname, &st) == 0)
		{
			if ((st.st_mode & EXCECUTABLE) == EXCECUTABLE)
			{
				free(tokens);
				return (pathname);
			}
		}
		free(pathname);
	}
	free(tokens);
	pathname = NULL;
	return (pathname);
}
