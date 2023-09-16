#include "main.h"
/**
 * display_prompt - display
 *
 * Return: void
 */

void display_prompt(void)
{
	printf(" shell$$ ");
}

/**
 * execute_command- execute the prompt display
 * @command: do am action
 * Return: void
 */

void execute_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		/* Child process*/

		execlp(command, command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		/* Parent process*/

		wait(NULL);
	}
}
