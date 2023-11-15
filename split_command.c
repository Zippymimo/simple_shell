#include "shell.h"
/*
 * split_command - Split a command into an array of tokens.
 * @command: The command to split.
 * @tokens: An array to store the tokens.
 *
 * Description:
 * This function takes a command string and splits it into an array of tokens.
 * It uses whitespace as the delimiter. The tokens are stored in the array
 * function returns the count of tokens.
 * split_command - Split a command into an array of tokens.
 * @command: The command to split.
 * @tokens: An array to store the tokens.
 */
int split_command(const char *command, char *tokens[])
{
	int token_count = 0;
	char *token = strtok((char *)command, " ");

	while (token != NULL && token_count < MAX_TOKENS - 1)
	{
		tokens[token_count++] = token;
		token = strtok(NULL, " ");
	}

	tokens[token_count] = NULL;
	return (token_count);
}
