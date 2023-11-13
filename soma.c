#include "shell.h"
/*soma_command(char *command, size_t size)- function that takes two parameters a 'command' a character array to store input command,'size'it is the maximum size of the input buffer.
 *command[strcspn(command, "\n")] = '\0'  Removes the newline character from the end of the input
 *
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
