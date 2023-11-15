#include "shell.h"
/**
 * soma_command - Reads a command from the standard input.
 * @command: A character array to store the input command.
 * @size: The size of the command array.
 *
 * Description:
 * This function reads a command from the standard input using fgets.
 * If an end-of-file is encountered, it prints a newline and exits suces.
 * If there is an input error, it prints an error message
 * The newline character at the end of the command is replaced with 0/
 */

void soma_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			my_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			my_print("input error.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
