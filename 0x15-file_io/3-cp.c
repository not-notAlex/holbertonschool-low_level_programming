#include "holberton.h"

/**
 * main - The code
 * @argc: number of arguments
 * @argv: strings of arguments
 * Return: End all mains with 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, numwrite = 1, numread = 1, err;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((numread = read(fd1, buf, 1024)) != 0)
	{
		if (numread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
			exit(98);
		}
		numwrite = write(fd2, buf, 1024);
		if (numwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if ((close(fd1) == -1 && (err = fd1)) || (close(fd2) == -1 && (err = fd2)))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", err);
		exit(100);
	}
	return (0);
}
