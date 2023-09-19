#include "main.h"

/**
 * show_prompt - Display the prompt
 * Return: void
 */
void show_prompt(void)
{
	write(STDOUT_FILENO, "$", 2);
}
