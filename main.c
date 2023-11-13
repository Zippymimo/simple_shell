#include "shell.h"
/*shows the entry point
 *show_prompt displays the prompt

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
            if (strcmp(tokens[0], "exit") == 0)
            {
                break;
            }
            else
            {
                execute_instruction(command);
            }
        }
    }

    return 0;
}
 * main - Entry point for the simple shell.
 *
 * Return: Always 0 (Success)
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

    return 0;
}
