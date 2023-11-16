#include "shell.h"
/**
 * Execute commands in a loop.
 *
 * Return: Always 0 (Success)
 */

int path(void)
{
	int token_count;

	while (1)
	{
		char input[MAX_PATH_SIZE];
		char command[MAX_PATH_SIZE];
		char *tokens[MAX_TOKENS];

		display_wd();
		token_count = split_line(input, tokens);

		if (!soma_command(char *command, size_t size))
		{
			my_print("Error while reading input.\n");
			break;
		}

		if (strcmp(command, EXIT_COMMAND) == 0)
		{
			break;
		}
		else if (strcmp(command, CD_COMMAND) == 0)
		{
			cd_command(tokens);
		}
		else
		{
			execute_command(command);
		}
	}

	    return 0;
}
