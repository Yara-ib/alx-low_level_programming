#include <stdlib.h>
#include <unistd.h>

int dprintf(__attribute__((unused))int fd, __attribute__((unused))const char *format, ...)
{
	sleep(98);
	return (1);
}
