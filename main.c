#include "shell.h"
/**
 * main - Entry point for the shell program.
 *
 * Description:
 * This function starts the shell and enters a loop n wait command
 * user commands until the "exit" command is entered. It displays the current
 * working directory, reads input commands, and executes them accordingly.
 * Return: zero on success
 */
int main(void)
{
	char command[MAX_ARGUMENTS];
	char *tokens[MAX_TOKENS];

	while (true)
	{
		int token_count;

		display_wd();
		soma_command(command, sizeof(command));

		token_count = split_command(command, tokens);

		if (token_count > 0)
		{
			if (strcmp(tokens[0], "path") == 0)
			{
			}
			else if (strcmp(tokens[0], "exit") == 0)
			{
				break;
			}
			else if (strcmp(tokens[0], "env") == 0)
			{
				env_builtin();
			}
			else
			{
				if (find_command_in_path(tokens[0]))
				{
					execute_instruction(command);
				}
				else
				{
					printf("Command not found: %s\n", tokens[0]);
				}
			}
		}
	}

	return (0);
}
