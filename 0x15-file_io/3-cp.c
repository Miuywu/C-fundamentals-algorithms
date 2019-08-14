#include "holberton.h"
/**
 * main - creates a file
 * @argc: arg count
 * @argv: files
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd, check, value, fd2;
	char arr[1024];
	char *err1 = "Error: Can't read from file ";
	char *err2 = "Error: Can't write to ";

	if (argc != 3) /*WORKS*/
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	} /*OPEN FILE 1*/
	fd = open(argv[1], O_RDWR, 0664);
	if (fd == -1)
	{ /*works*/
		dprintf(STDOUT_FILENO, "%s%s\n", err1, argv[1]);
		exit(98);
	} /*CREATE FILE 2*/
	fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd2 == -1)
	{ /*works*/
		dprintf(STDOUT_FILENO, "%s%s\n", err2, argv[2]);
		exit(99);
	} /*READ FILE 1*/
	value = read(fd, arr, 1024);
	if (value == -1)
	{ /*works*/
		close(fd);
		dprintf(STDOUT_FILENO, "%s%s\n", err1, argv[1]);
		exit(98);
	} /*WRITE*/
	check = write(fd2, arr, 1024);
	if (check == -1)
	{ /*works*/
		close(fd2);
		dprintf(STDOUT_FILENO, "%s%s\n", err2, argv[2]);
		exit(99);
	}
	close(fd);
	return (0);
}
