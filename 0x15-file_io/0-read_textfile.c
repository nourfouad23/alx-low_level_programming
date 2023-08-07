#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: relative or absolute path of the file
 * @letters: number of letters to read and print
 *
 * Return: total number of chars printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileNumb;
	int length, wroteChars;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	fileNumb = open(filename, O_RDONLY);
	if (fileNumb == -1)
	{
		free(buf);
		return (0);
	}
	length = read(fileNumb, buf, letters);
	if (length == -1)
	{
		free(buf);
		close(fileNumb);
		return (0);
	}

	wroteChars = write(STDOUT_FILENO, buf, length);

	free(buf);
	close(fileNumb);
	if (wroteChars != length)
		return (0);
	return (length);
}