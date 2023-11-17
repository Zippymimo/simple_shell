#include "shell.h"
/**
 * execute_instruction - Execute a given instruction in a child process.
 * @instruction: The instruction to execute.
 * execute_instruction - Execute a given instruction in a child process.
 *
 * Description:h
 * This function takes a command instruction as input, forks a cp,
 * and executes the instruction in the child process using the execve system
 * call. It waits for the child process to complete in the parent process.

void execute_instruction(const char *instruction)
{

	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{

		execlp(instruction, instruction, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{

		wait(NULL);
	}
}
*/
void execute_instruction(const char *instruction)
{
    pid_t child_pid = fork();

    if (child_pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (child_pid == 0) {
        char *args[MAX_ARGUMENTS];
        int arg_count = 0;

        char *token = strtok((char *)instruction, " ");
        while (token != NULL && arg_count < MAX_ARGUMENTS - 1) {
            args[arg_count++] = token;
            token = strtok(NULL, " ");
        }
        args[arg_count] = NULL;

        execvp(args[0], args);

        perror("execvp");
        exit(EXIT_FAILURE);
    } else {
        wait(NULL);
	}
}