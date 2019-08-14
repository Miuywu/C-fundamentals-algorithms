#include "holberton.h"
/**
 * writeErr - v
 * @fd: f
 */
void writeErr(char *fd)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd);
	exit(99);
}
/**
 * readErr - v
 * @fd: f
 */
void readErr(char *fd)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd);
	exit(98);
}
/**
 * exit97 - v
 */
void exit97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * closeh - v
 * @fd: f
 */
void closeh(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - creates a file
 * @argc: arg count
 * @argv: files
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd1, value, fd2, clz;
	char arr[1024];

	if (argc != 3)/*WORKS*/
		exit97();
	/*OPEN FILE 1*/
	fd1 = open(argv[1], O_RDONLY, 0664);
	if (fd1 == -1)/*works*/
		readErr(argv[1]);
	/*CREATE FILE 2*/
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)/*works*/
		writeErr(argv[2]);
	/*READ FILE 1*/
	while ((value = read(fd1, arr, 1024)) > 0)
	{ /*WRITE*/
		if (write(fd2, arr, value) != value)/*works*/
			writeErr(argv[2]);
	}
	if (value == -1)
		readErr(argv[1]);
	/*CLOSE*/
	clz = close(fd1);
	if (clz == -1)/*works*/
		closeh(fd1);
	clz = close(fd2);
	if (clz == -1)/*works*/
		closeh(fd2);
	return (0);
}
