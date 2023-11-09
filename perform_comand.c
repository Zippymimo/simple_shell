#include "shell.h"
/**
 * perform_command - Execute a given command in a child process.
 *  The command to execute.
 */
void perform_command(const char *command)
 {
    pid_t child_pid = fork();

    if (child_pid == -1) {
       my_print("fork error");
        exit(EXIT_FAILURE);
    } else if (child_pid == 0) {
        char *args[MAX_ARGUMENTS];
        int arg_count = 0;

        char *token = strtok((char *)command, " ");
        while (token != NULL && arg_count < MAX_ARGUMENTS - 1) {
            args[arg_count++] = token;
            token = strtok(NULL, " ");
        }
        args[arg_count] = NULL;
        if (execve(args[0], args, NULL) == -1) {
          my_print("execve error");
            exit(EXIT_FAILURE);
        }
    } else {
        int status;
        waitpid(child_pid, &status, 0);
    }
}