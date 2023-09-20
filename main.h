#ifndef MAIN_H
#define MAIN_H
#define MAX_COMMAND_LENGTH 1024
#define MAX_ARGS 64
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>


/*prompt*/
void display_prompt(void);
void execute_command(const char *command);
void _input(char *command, size_t size);
int main(void);
void _print(char *string, int descriptor);

/*__FUNCTION_PROTOTYPES*/
void show_prompt(void);
char *read_command(void);
char **parse_command(char *command);
int execute_command(char **args);
void free_memory(char **args);

#endif/*SIMPLE_SHELL_H*/
