#include "main.h"

/*
 * prompt_print- printing the prompt
 * @string: the strength
 *
 * Return: void
 */

void prompt_print(char *string, int descriptor)
{
int p = 0;

for (; string[p] != '\0'; p++)
write(stream, &string[p], 1);
}
