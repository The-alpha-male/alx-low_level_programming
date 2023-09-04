#include "main.h"

/**
* read_textfile - check the code for Holberton School students.
* @filename: name of the file to be read
* @letters: number of letters to read and write.
* Return: number letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t xletters;
	int file;
	char *text;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	xletters = read(file, text, sizeof(char) * letters);
	if (nletters == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	xletters = write(STDOUT_FILENO, text, xletters);
	if (xletters == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (xletters);
}
