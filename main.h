#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

/*prompt*/
void display_prompt(void);
void execute_command(const char *command);
void _input(char *command, size_t size);
int main(void);
void _print(char *string, int descriptor);

#endif
