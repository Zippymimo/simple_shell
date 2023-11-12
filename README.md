This is our simple c shell team project. Our team consists of Zippy mimo and Austine

1 Mandatory	Write a beautiful code that passes the betty checks.

2 Mandatory	Write a UNIX command line interpreter.

Your Shell should:
Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semi-columns, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
You have to handle the "end of file" condition (Ctrl+D). Exit with code 0
You don't have to:
use the PATH
implement built-ins
handle special characters : ", ', `, , *, &, #
be able to move the cursor
handle commands with arguments.
3.Mandatory	Simple shell 0.1 +
Handle command lines with arguments.
4. Mandatory	Simple shell 0.1 +
Write your own getline function
Use a buffer to read many chars at once and call the least possible the readsystem call
You will need to use static variables
You are not allowed to use getline
You don't have to:
be able to move the cursor.
5. Mandatory	Simple shell 0.2 +
Handle the PATH
6. Mandatory	Simple shell 0.3 +
Implement the exit buit-in, that exits the shell
Usage: exit
You don't have to handle any argument to the built-in exit.