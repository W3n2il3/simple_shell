#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>

/*prompt*/
void display_prompt(void);
void execute_command(const char *command);


void n_exit(char *env[]);
void _env(char *env[]);
void (*check_for_builtins(char *argv[], char *env[]))(char *env[]);
#endif
