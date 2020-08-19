#include "holberton.h"

/**
 * built_ins - checks if a receibed commad is or not a built-in function
 * @argv: The array of tokens wich has the command to be checked.
 * @line: The whole line that needs to be freed.
 *
 * Return: EXIT_FAILURE if the command is not a built-in
 *         EXIT_SUCCESS if the command is env.
 *         EOF if the command is exit.
 */
int built_ins(char **argv, char *line)
{
	int env_c = -1, ext_c = -1;
	char env[] = "env";
	char ext[] = "exit";

	if (argv[0])
	{
		env_c = _strcmp(argv[0], env);
		ext_c = _strcmp(argv[0], ext);
	}
	if (env_c == 0 && argv[1] == NULL)
	{
		print_env();
		free(line);
		free(argv);
		return (EXIT_SUCCESS);
	}
	else if (ext_c == 0 && argv[1] == NULL)
	{
		free(line);
		free(argv);
		return (EOF);
	}
	else
	{
		return (EXIT_FAILURE);
	}

	return (EXIT_FAILURE);
}
