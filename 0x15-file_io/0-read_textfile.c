#include "holberton.h"

/**
 * read_textfile - reads a file and prints it to standard output
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, numread;
	char *buf;
	unsigned int numwrite;

	if (filename == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(i);
		return (0);
	}
	numread = read(i, buf, letters);
	if (numread == -1)
	{
		free(buf);
		close(i);
		return (0);
	}
	numwrite = write(STDOUT_FILENO, buf, letters);
	if (numwrite != letters)
	{
		free(buf);
		close(i);
		return (0);
	}
	close(i);
	free(buf);
	return (numread);
}
