#include "main.h"

/**
 * main - A prog that copies the content of one file to another
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 (exit success) otherwise error
 */

int main(int argc, char *argv[])
{
	int count, fd_src, fd_dest;
	char buf[1024];
	mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);	}
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
	{
	dprintf(2, "Error: Can't read from file %s\n", argv[1]);
	exit(98);	}
	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perm);
	if (fd_dest == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((count = read(fd_src, buf, 1024)) > 0)
	{
		if (write(fd_dest, buf, count) != count)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}	}
	if (count == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);	}
	if (close(fd_src) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_src);
		exit(100);	}
	if (close(fd_dest) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_dest);
		exit(100);	}
	return (0);
}
