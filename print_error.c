#include "holberton.h"

/**
 * prt_err - prints error messages
 * @av_0: The av[0] that contains the name of the shell.
 * @cnt: Counter of the number of prompts so far.
 * @line: The whole line from getline()
 * @status: The status captured from exectve()
 *
 * Return: The corresponding exit code.
 */
int prt_err(char *av_0, int cnt, char *line, int status)
{
	if (status == ENOENT)
	{
		_printf("%s: %d: %s: not found\n", av_0, cnt, line);
		return (127);
	}
	else if (status == EACCES)
	{
		_printf("%s: %d: %s: Permission denied\n", av_0, cnt, line);
		return (126);
	}

	return (EXIT_SUCCESS);
}
