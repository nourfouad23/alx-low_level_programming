#define _GNU_SOURCE
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * close_errchk - closes a file descriptor and prints
 *
 * @fd: file descriptor to close
 *
 * Return: 0 on success, -1 on failure
 */
int close_errchk(int fd)
{
	int err;

	err = close(fd);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}

/**
 * write_err - error handler for a write error
 *
 * @fd1: first descriptor to close
 * @fd2: second descriptor to close
 * @filename: filename prompting the error
 *
 * Return: 99
 */
int write_err(int fd1, int fd2, char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	close_errchk(fd1);
	close_errchk(fd2);
	return (99);
}

/**
 * read_err - error handler for a read error
 *
 * @fd1: first descriptor to close
 * @fd2: second descriptor to close
 * @filename: filename prompting the error
 *
 * Return: 98
 */
int read_err(int fd1, int fd2, char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	close_errchk(fd1);
	close_errchk(fd2);
	return (98);
}

/**
 * main - copy one file to another, new file with perms 664
 * usage - cp file_from file_to
 *
 * @ac: number of arg
 * @av: list of args
 *
 * Return: 97 if incorrect num of args
 */

int main(int ac, char *av[])
{
	char buf[1024];
	int lenREAD, lenWRITE, fileFrom, fileTo, err;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp fileFrom fileTo\n");
		return (97);
	}
	fileFrom = open(av[1], O_RDONLY);
	if (fileFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			av[1]);
		return (98);
	}
	fileTo = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close_errchk(fileFrom);
		return (99);
	}
	do {
		lenREAD = read(fileFrom, buf, 1024);
		if (lenREAD == -1)
			return (read_err(fileFrom, fileTo, av[1]));
		lenWRITE = write(fileTo, buf, lenREAD);
		if (lenWRITE == -1 || lenWRITE != lenREAD)
			return (write_err(fileFrom, fileTo, av[2]));
	} while (lenREAD == 1024);
	err = close_errchk(fileFrom);
	err += close_errchk(fileTo);
	if (err != 0)
		return (100);
	return (0);
}
