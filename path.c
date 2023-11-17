#include "shell.h"
/**
 * find_command_in_path - Looks for the specified command in the PATH variable.
 * @command: The command to search for.
 * Return: 1 if the comand is found.
 */
int find_command_in_path(const char *command)
{
	char *path = getenv("PATH");
	char *path_copy = strdup(path);
	char *dir = strtok(path_copy, ":");

	while (dir != NULL)
	{
		char full_path[MAX_PATH_SIZE];
		snprintf(full_path, sizeof(full_path), "%s/%s", dir, command);

		if (access(full_path, X_OK) == 0)
		{
			free(path_copy);
			return 1;
		}

		dir = strtok(NULL, ":");
	}
	free(path_copy);
	return 0;
}