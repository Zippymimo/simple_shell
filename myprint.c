#include "shell.h"
/* this is my print function
 * it prints the string passed to it
 *
 */
void my_print(const char *input_string)
{
	write(STDOUT_FILENO, input_string, strlen(input_string));
}