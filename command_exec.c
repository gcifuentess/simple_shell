#include "holberton.h"

/**
 * command_exec - excecutes the command received trough command line.
 * @line: The whole line received from the command line .
 *
 * Return: EXIT_FAILURE, EXIT_SUCCESS, or EOF otherwise.
 */
int command_exec(char *line)
{
	char *delimiters = " ,!¡¿?\'\"\n\t`";
	char **argv = NULL;
	int builtin = -1;
	char *pathname = NULL;

	argv = split_for_argv(line, delimiters);
	builtin = built_ins(argv, line);
	if (builtin == EXIT_FAILURE)
	{
		pathname = _which(argv[0]);
		if (!pathname)
			pathname = argv[0];
		printf("pathname: %s\n", pathname);
		return (program_execution(argv, pathname, line));
	}
	else
	{
		return (builtin);
	}

	return (EXIT_FAILURE);
}
