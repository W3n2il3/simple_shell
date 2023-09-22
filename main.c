#include "shell.h"

/**
 * main- entry point
 *
 * Return: 0 success
 * */
int main(void) {
    char command[128];
    while (1) {
        display_prompt();
        user_input(command, sizeof(command));
        execute_command(command);
    }
    return 0;
}
