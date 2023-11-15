#include "shell.h"
/*
 * my_print - this is my print function
 * @input_string: The string to be printed.
 *
 * Description: This function writes the provided string to the standard output
 */
void my_print(const char *input_string)
{
	write(STDOUT_FILENO, input_string, strlen(input_string));
}
