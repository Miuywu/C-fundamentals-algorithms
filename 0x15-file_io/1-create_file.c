#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: txt file
 * @text_content: chars in file
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *filespace = text_content;
	int value, check;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	for (value = 0; *filespace != '\0'; value++, filespace++)
		;
	check = write(fd, text_content, value);
	if (check == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
