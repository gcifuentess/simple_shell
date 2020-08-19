#include "holberton.h"

/**
 * program_execution - excecutes the program received trough command line.
 * @argv: The array of tokens with the program and its arguments to be runned.
 * @pathname: The pathname receibed from _which().
 * @line: The whole line that needs to be freed if there is an error.
 *
 * Return: errno if execve() fails EXIT_SUCCESS otherwise.
 */
int program_execution(char **argv, char *pathname, char *line)
{
	if (argv[0])
	{
		if (execve(pathname, argv, NULL) == -1)
		{
			if (pathname != argv[0])
				free(pathname);
			free(argv);
			free(line);
			return (errno);
		}
	}
	else
	{
		if (pathname != argv[0])
			free(pathname);
		free(argv);
		free(line);
		return (EXIT_SUCCESS);
	}

	return (EXIT_SUCCESS);
}
