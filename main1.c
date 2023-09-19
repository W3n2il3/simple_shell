#include "main.h"

/**
 * main- entry point
 *
 * Return: 0
 */

int main(void)
{
	char command[128];

	while (1)
	{
		_prompt();
		_input(command, sizeof(command));
		execute_command(command);
	}
	return 0;
}
