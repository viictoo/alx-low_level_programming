#include "main.h"

/**
 * create_file -A function that creates a file
 * @filename: name of the file to create
 * @text_content: null terminated ctring to write to the file
 * Return: 1 otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int filde, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	filde = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR);
	if (filde == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		if (write(filde, text_content, i) == -1)
			return (-1);
	}
	close(filde);
	return (1);
}
