#include "shell.h"
/*shows the entry point
 *show_prompt displays the prompt
 */

int main(void)
{
	char command[MAX_ARGUMENTS];
	while (true)
	{
		display_wd();
		soma_command(command, sizeof(command));
		execute_instruction(command);
	}

	return 0;
}
