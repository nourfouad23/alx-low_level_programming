#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - creates a file and puts text in it
 *
 * @filename: name for file
 * @text_content: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileINT;
	ssize_t length, inLength;
	char *ptr;

	if (filename == NULL)
		return (-1);

	fileINT = open(filename, O_WRONLY | O_APPEND);
	if (fileINT == -1)
		return (-1);

	for (inLength = 0, ptr = text_content; *ptr; ptr++)
		inLength++;
	length = write(fileINT, text_content, inLength);

	if (close(fileINT) == -1 || inLength != length)
		return (-1);
	return (length);
}
