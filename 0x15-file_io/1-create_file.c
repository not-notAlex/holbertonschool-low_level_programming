#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of file to make
 * @text_content: content of the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, numwrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[len])
		len++;
	numwrite = write(fd, text_content, len);
	if (numwrite == -1 || numwrite != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
