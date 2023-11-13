#include "shell.h"
/**
 * env_builtin - Prints the current environment.
 */
void env_builtin(void)
{
	extern char **environment;
	char **envpointer = environment;

	while (*envpointer != NULL)
	{
		my_print(*envpointer);
		my_print("\n");
		envpointer++;
	}
}