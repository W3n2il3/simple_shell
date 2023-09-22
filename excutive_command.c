#include "shell.h"

/**
 * execute_command - Executes the command given.
 * @args: An array of pointers to the command and its arguments.
 *
 * Return: 1 on success, 0 on failure.
 */
int execute_command(char **args)
{
	pid_t pid;
	pid_t wpid;
	int status;

	(void)wpid;

	pid = fork();
	if (pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("execute_command");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("execute_command");
	}
	else
	{
		do {
			wpid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
/**
 * user_input- the input user
 * @char: the input charector
 * @size_t: the size of the input
 *
 */

#include "shell.h"
void user_input(char *command, size_t size) 
{
    if (fgets(command, size, stdin) == NULL) {
        if (feof(stdin)) {
            printf("\n");
            exit(EXIT_SUCCESS);
        } else {
            perror("fgets");
            exit(EXIT_FAILURE);
        }
    }
    command[strcspn(command, "\n")] = '\0'; // Remove newline
}
