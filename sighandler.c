#include "holberton.h"

/**
 * sighandler - sets exit_handler flag on
 * @sig: signal code.
 *
 * Return: Void
 */
void sighandler(int sig __attribute__((unused)))
{
	/*signal(SIGINT, SIG_IGN);*/
	_printf("\n$ ");
}
