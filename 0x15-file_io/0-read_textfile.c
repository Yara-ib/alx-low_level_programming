#include "main.h"

/**
 * read_textfile - reads a text file & prints it to the POSIX standard output.
 * @filename: file to be read.
 * @letters: number of letters it should read & print.
 * Return: the actual number of letters it read or printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_letters, p_letters, fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r_letters = read(fd, buffer, letters);
	if (r_letters <= 0)
		return (0);

	p_letters = write(STDOUT_FILENO, buffer, r_letters);
	if (p_letters <= 0)
		return (0);

	free(buffer);
	close(fd);
	return (p_letters);
}
