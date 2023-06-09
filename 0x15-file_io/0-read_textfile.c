#include "main.h"
#include <errno.h>
#include <unistd.h>
/**
 * read_textfile - A function that reads a text file and prints it
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: Actual number of  letters it could read and print otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	ssize_t read_count, write_count;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);
	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
	{
		free(buffer);
		return (0);	}
	read_count = read(fildes, buffer, letters);
	if (read_count == -1)
	{
		free(buffer);
		close(fildes);
		return (0);	}

	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1)
	{
		free(buffer);
		close(fildes);
		return (0);
	}

	free(buffer);
	close(fildes);
	return (write_count);
}
