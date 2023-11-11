#include "shell.h"

/**
 * execute_instruction - Execute a given instruction in a child process.
 * @instruction: The instruction to execute.
 */
void execute_instruction(const char *instruction)
{
    pid_t child_process = fork();

    if (child_process == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (child_process == 0)
    {
        char *message[MAX_ARGUMENTS];
        int message_count = 0;

        char *token = strtok((char *)instruction, " ");
        while (token != NULL && message_count < MAX_ARGUMENTS - 1)
        {
            message[message_count++] = token;
            token = strtok(NULL, " ");
        }
        message[message_count] = NULL;

        if (execve(message[0], message, NULL) == -1)
        {
            perror("execve");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        wait(NULL);
    }
}
