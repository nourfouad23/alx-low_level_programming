#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: relative or absolute path of the file
 * @letters: number of letters to read and print
 *
 * Return: total number of chars printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *toPrint;
	ssize_t rd, wt;
	int fileNumber;

	if (filename == NULL)
		return (0);
	toPrint = malloc(sizeof(char) * letters);
	if (toPrint == NULL)
		return (0);
	fileNumber = open(filename, O_RDONLY);
	if (fileNumber < 0)
	{
		free(toPrint);
		return (0);
	}
	rd = read(fileNumber, toPrint, letters);
	if (rd < 0)
	{
		free(toPrint);
		return (0);
	}
	if (rd > 0)
		wt = write(STDOUT_FILENO, toPrint, rd);
	if (wt < rd)
	{
		free(toPrint);
		return (0);
	}
	wt = close(fileNumber);
	if (wt < 0)
	{
		free(toPrint);
		return (0);
	}
	free(toPrint);
	return (rd);
}