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
	int value, check;

	if (!filename)
		return (0);
	filespace = malloc(letters * sizeof(char));

	if (!filespace)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(filespace);
		return (0);
	}
	value = read(fd, filespace, letters);
	check = write(2, filespace, value);
	if (check == -1 || check != value)
	{
		free(filespace);
		return (0);
	}
	close(fd);

	return (value);
}
