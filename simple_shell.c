#include "holberton.h"

/**
 * main - Simple SHELL
 * @ac: arguments counter
 * @av: arguments array
 *
 * Return: EXIT_SUCCESS on success EXIT_FAILURE on error.
 */
int main(int ac, char **av)
{
	char *line = NULL;
	size_t len_retget = 0, cnt = 0;
	pid_t child_pid;
	int status, retget, len;

	signal(SIGINT, sighandler);
	while (TRUE)
	{
		if (isatty(STDIN_FILENO))
			write(0, "$ ", 3);
		retget = getline(&line, &len_retget, stdin);
		if (retget == EOF)
		{
			free(line);
			write(0, "\n", 1);
			break;
		}
		len = _strlen(line);
		line[len - 1] = '\0';
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			exit(EXIT_FAILURE);
		}
		if (child_pid == 0)
			exit(command_exec(line));
		waitpid(child_pid, &status, WUNTRACED | WCONTINUED);
		cnt++;
		if (WEXITSTATUS(status) == EOF_STATUS)
		{
			free(line);
			exit(EXIT_SUCCESS);
		}
		else if (WEXITSTATUS(status) == ENOENT)
			_printf("%s: %d: %s: not found\n", av[0], cnt, line);
	}
	return (EXIT_SUCCESS);
}
