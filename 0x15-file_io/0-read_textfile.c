#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: pointer to file
 * @letters: contains number of letters
 * Return: 0 fail to open file 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, fwrite, fread;
	char *totalSize;

	totalSize = malloc(sizeof(char) * letters);
	if (totalSize == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	fread = read(file, totalSize, letters);
	if (fread == -1)
		return (0);
	fwrite = write(file, totalSize, letters);
	if (fwrite == -1)
		return (0);
	close(file);
	free(totalSize);
	return(fwrtie);
}
