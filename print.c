#include "main.h"

/*
 * _print- printing the prompt
 * @string: the strength
 * @descriptor: the discripter of an interger
 * Return: void
 */

void _print(char *string, int descriptor)
{
	int p = 0;

	for (; string[p] != '\0'; p++)
	write(stream, &string[p], 1);
}
