#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to created.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1: success || -1: failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t w_letters, fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		w_letters = write(fd, text_content, strlen(text_content));
			if (w_letters <= 0)
				return (-1);
	}
	close(fd);
	return (1);
}
