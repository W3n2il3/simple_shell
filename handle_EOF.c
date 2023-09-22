#include "shell.h"

/**
 * user_input- the input user
 * @char: the charector of the user
 * @size_t: the size of the charector
 *
 *
 * */

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
