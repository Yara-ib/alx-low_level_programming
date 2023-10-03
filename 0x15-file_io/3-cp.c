#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - Entry point.
 * @argc: arguments count passed on to the program.
 * @argv: vector to arguments passed and saved in a NULL terminated array.
 * Return: 0: Success.
*/

int main(int argc, char *argv[])
{
	ssize_t readable, writable, fd_from, fd_to;
	char buffer[1024];

	if (buffer == NULL || argv[1] == 0)
		return (0);
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY,
				S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
				S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	readable = read(fd_from, argv[1], sizeof(argv[1]));
	if (readable <= 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	writable = write(fd_to, argv[2], readable);
	if (writable <= 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close(fd_from);
	close(fd_to);
	return (0);
}
