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
	ssize_t bytes_read, bytes_written, source_fd, dest_fd;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (dest_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(source_fd);
		exit(99);
	}

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written <= 0)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(source_fd);
			close(dest_fd);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(source_fd);
		close(dest_fd);
		exit(98);
	}
	return (0);
}
