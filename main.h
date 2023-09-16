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
void user_input(char *command, size_t size);
int main(void);
void prompt_print(char *string, int descriptor);

void n_exit(char *env[]);
void _env(char *env[]);
void (*check_for_builtins(char *argv[], char *env[]))(char *env[]);
#endif
