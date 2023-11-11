#include "shell.h"
/*
 *
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
