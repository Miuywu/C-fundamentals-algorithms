#include "holberton.h"
/**
 * read_textfile - reads txt file prints POSIX standard output
 * @filename: txt file
 * @letters: # of chars in file
 * Return: binary string converted to decimal
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *filespace;
	ssize_t value = 0;

	if (!filename)
		return (0);
	filespace = malloc((letters + 1) * sizeof(char));

	if (!filespace)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	read(fd, filespace, letters);

	value = write(2, filespace, letters);
	close(fd);

	return (value);
}
