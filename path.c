#include "shell.h"
/**
 * find_command_in_path - Looks for the specified command in the PATH variable.
 * @command: The command to search for.
 *
 *
 * Description:
 * find_command_in_path - this function search for specified command in path
 * in the PATH environment variable. It returns 1 if the command is found and
 * is executable; otherwise, it returns 0.
 *
 * return: 1 if the command is found in the PATH, 0 otherwise.
 */
int find_command_in_path(const char *command)
{
	char *path = getenv("PATH");
	char *path_copy = strdup(path);
	char *dir = strtok(path_copy, ":");

	while (dir != NULL)
	{
		char full_path[MAX_PATH_SIZE];

		printf(full_path, sizeof(full_path), "%s/%s", dir, command);

		if (access(full_path, X_OK) == 0)
		{
			free(path_copy);
			return (1);
		}

		dir = strtok(NULL, ":");
	}
	free(path_copy);
	return (0);
}
