#include "shell.h"
/**
 * split_command - Split a command into an array of tokens.
 * @command: The command to split.
 * @tokens: An array to store the tokens.
 * Return: return the count of tokens.
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
