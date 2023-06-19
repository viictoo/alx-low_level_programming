#include "main.h"

/**
 * append_text_to_file -  A function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: Null terminated string to add at the end of the file
 * Return: 1 otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filde, i, _strlen;

	if (filename == NULL)
		return (-1);

	filde = open(filename, O_WRONLY | O_APPEND);
	if (filde == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (_strlen = 0; text_content[_strlen]; _strlen++)
			;
		i = write(filde, text_content, _strlen);
		if (i == -1)
		{
			close(filde);
			return (-1);
		}
	}
	close(filde);
	return (1);
}
