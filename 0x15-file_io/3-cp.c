#include "main.h"
#define BUFFER_SIZE 1024

/**
 * closeFile - close fds opened.
 * @fd: file descriptor.
 * @argv: vector to arguments passed and saved in a NULL terminated array.
 * Return: nothing.
*/

void closeFile(ssize_t fd, char *argv)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", argv);
		exit(100);
	}
}

/**
 * main - Entry point.
 * @argc: arguments count passed on to the program.
 * @argv: vector to arguments passed and saved in a NULL terminated array.
 * Return: 0: Success.
*/

int main(int argc, char *argv[])
{
	ssize_t readable, writable, fd_from, fd_to;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((readable = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		writable = write(fd_to, buffer, readable);
		if (writable <= 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (readable == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	closeFile(fd_from, argv[1]);
	closeFile(fd_to, argv[2]);
	return (0);
}
