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
/*
 * _input - the handle input
 * @command: the instruction
 * Return: void
 */

void _input(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("fgets");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0'; /* Remove newline*/
}
