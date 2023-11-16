#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <stdbool.h>

#define MAX_PATH_SIZE 1024
#define MAX_ARGUMENTS 128
#define MAX_TOKENS 64
#define MAX_INPUT_LENGTH 80
#define READ_BUFFER_SIZE 1024
extern char **environ;

void display_wd(void);
void print_string(void);
void my_print(const char *input_string);
void soma_command(char *command, size_t size);
void execute_instruction(const char *instruction);
void env_builtin(void);
int split_command(const char *command, char *tokens[]);
int find_command_in_path(const char *command);

#endif
