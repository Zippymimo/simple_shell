#include "shell.h"
/**
 * split_command - Splits the command and its arguments into an array of strings.
 *
 * @command: The command with arguments.
 * @tokens: Array to store the command and its arguments.
 * @return: Number of tokens.
 */
int split_command(const char *command, char *tokens[]) {
    int token_count = 0;
    char *token = strtok((char *)command, " ");

    while (token != NULL && token_count < MAX_TOKENS - 1) {
        tokens[token_count++] = token;
        token = strtok(NULL, " ");
    }

    tokens[token_count] = NULL;
    return token_count;
}