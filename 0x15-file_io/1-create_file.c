#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: NULL to terminate the string
 * Return: 1 success -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, fwrite, x;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (x = 0; text_content[x]; x++)
			;
		fwrite = write(file, text_content, x);
		if (fwrite == -1)
			return (-1);
	}
	close(file);
	return (1);
}
