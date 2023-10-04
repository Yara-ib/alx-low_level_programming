#include "main.h"
#define BUFFER_SIZE 1024

/**
 * check_errors - check for errors in each case.
 * @error_msg: msg to be printed to output.
 * @fd: file descriptor needed to be checked.
 * @exit_code: number of the error/exit code.
 * Return: Nothing, just checking things.
*/

void check_errors(char *error_msg, char *fd, int exit_code)
{
	dprintf(2, "Error: %s %s\n", error_msg, fd);
	exit(exit_code);
}

/**
 * main - Entry point.
 * @argc: arguments count passed on to the program.
 * @argv: vector to arguments passed and saved in a NULL terminated array.
 * Return: 0: Success.
*/

int main(int argc, char *argv[])
{
	ssize_t readable, writable;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		check_errors("Usage: cp file_from file_to", NULL, 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		check_errors("Can't read from file", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (fd_to == -1)
	{
		close(fd_from);
		check_errors("Can't write to file", argv[2], 99);
	}
	while ((readable = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		writable = write(fd_to, buffer, readable);
		if (writable <= 0)
		{
			close(fd_from);
			close(fd_to);
			check_errors("Can't write to file", argv[2], 99);
		}
	}
	if (readable == -1)
	{
		close(fd_from);
		close(fd_to);
		check_errors("Can't read from file", argv[1], 98);
	}
	return (0);
}
