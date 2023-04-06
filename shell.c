#include "shell.h"

/**
* main - Main loop that parses input from Command Line interface and executes
* @argc: Number of args passed to the program
* @argv: Array of arguments
* Return: Always 0 on success
*/

int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused))
{
	char *args[] = NULL; /*array of toekns*/
	char *input_stdin = NULL; /* getline manages the memory so we set to NULL */
	int status_return = 1, exit_status = 0; /* status_return is the return value of the function, exit_status is the exit status of the program */
	size_t size = 0; /* we let getline manage the size of the buffer */
	ssize_t glrv = 0; /* checking getline return value (glrv) and EOF */

	/* checking if we exit the loop*/
	while (status_return && glrv != EOF)
	{
		size = 0; /* setting to 0 for every new input */
		/* return 1 if the file in the argument refers to the terminal */
		status_return = isatty(STDIN_FILENO); /* checking if we are in interactive mode */
		if (status_return) /* if we are in interactive mode */
		{
			write(STDOUT_FILENO, "$ ", 2); /* print prompt */
		}
	}



}