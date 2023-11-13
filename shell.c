#include "shell.h"
/*
*static char input_buffer[READ_BUFFER_SIZE];
static size_t buffer_position = 0;
static size_t buffer_size = 0;
static void refill_buffer(void) {
    ssize_t bytesRead = read(STDIN_FILENO, input_buffer, READ_BUFFER_SIZE);
    if (bytesRead < 0) {
        perror("read");
        exit(EXIT_FAILURE);
    }
    buffer_size = (size_t)bytesRead;
    buffer_position = 0;
}
ssize_t my_getline(char **lineptr, size_t *n) {
    size_t i;
    if (buffer_position >= buffer_size) {
        refill_buffer();
        if (buffer_size == 0) {
            return 0;
        }
    }
    for (i = buffer_position; i < buffer_size && input_buffer[i] != '\n'; ++i)
        ;
    size_t line_length = i - buffer_position;
    if (i < buffer_size) {
        memcpy(*lineptr, &input_buffer[buffer_position], line_length);
        buffer_position = i + 1;
    } else {
        refill_buffer();
        return my_getline(lineptr, n);
    }
    if (line_length + 1 > *n) {
        *n = line_length + 1;
        *lineptr = realloc(*lineptr, *n);
        if (*lineptr == NULL) {
            perror("realloc");
            exit(EXIT_FAILURE);
        }
    }
    (*lineptr)[line_length] = '\0';
    return (ssize_t)line_length;
}
*/
