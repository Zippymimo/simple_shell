#include "shell.h"
/**
 * env_builtin - Prints the current environment.
 */
void env_builtin(void)
{
	extern char **environ;
	char **env_ptr = environ;

	while (*env_ptr != NULL)
	{
		my_print(*env_ptr);
		my_print("\n");
		env_ptr++;
	}
}