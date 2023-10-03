#include "main.h"
#define BUFFER_SIZE 1024

/**
 * print_error - point.
 * @message: arguments count passed on to the program.
 * @code: vector to arguments passed and saved in a NULL terminated array.
 * @filename:or to arguments passed and saved in a NULL term
 * @fd: or to arguments passed and saved in a NULL term
 * Return: 0: Na-da.
*/

void print_error(int code, char *message, char *filename, int fd)
{
	dprintf(2, message, filename, fd);
	exit(code);
}

/**
 * main - Entry point.
 * @argc: arguments count passed on to the program.
 * @argv: vector to arguments passed and saved in a NULL terminated array.
 * Return: 0: Success.
*/
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1], source_fd);

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
					S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
		print_error(99, "Error: Can't write to %s\n", argv[2], dest_fd);

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written <= 0)
			print_error(99, "Error: Can't write to %s\n", argv[2], dest_fd);
	}

	if (bytes_read == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1], source_fd);

	if (close(source_fd) == -1 || close(dest_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n",
					(close(source_fd) == -1) ? source_fd : dest_fd);
		exit(100);
	}
	return (0);
}
