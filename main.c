#include "shell.h"
/*shows the entry point
 *show_prompt displays the prompt


int main(void) {
    char command[MAX_ARGUMENTS];
    char *tokens[MAX_TOKENS];

    while (true) {
        int token_count;
        display_wd();
        soma_command(command, sizeof(command));

        token_count = split_command(command, tokens);

        if (token_count > 0) {
            execute_instruction(command);
        }
    }
return 0;
}
*/
int main(void) {
    char command[MAX_ARGUMENTS];
    char *tokens[MAX_TOKENS];

    while (true) {
        int token_count;
        display_wd();
        soma_command(command, sizeof(command));

        token_count = split_command(command, tokens);

        if (token_count > 0) {
            if (strcmp(tokens[0], "exit") == 0) {
                break;
            } else {
                execute_instruction(command);
            }
        }
    }

    return 0;
}