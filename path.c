#include "shell.h"
/*
*char *path = getenv("PATH")-Gets the value of the PATH environment variable
* char *path_copy = strdup(path)-strtok modifies the string and makes a copy of the environment variable
*  char *dir = strtok(path_copy-Tokenizes the copy of the PATH variable using  a delimiter
*/
int find_command_in_path(const char *command) {
    char *path = getenv("PATH");
    char *path_copy = strdup(path);
    char *dir = strtok(path_copy, ":");

    while (dir != NULL) {
        char full_path[MAX_PATH_SIZE];
        snprintf(full_path, sizeof(full_path), "%s/%s", dir, command);

        if (access(full_path, X_OK) == 0) {
            free(path_copy);
            return 1;
        }

        dir = strtok(NULL, ":");
    }
    free(path_copy);
   return 0;
}