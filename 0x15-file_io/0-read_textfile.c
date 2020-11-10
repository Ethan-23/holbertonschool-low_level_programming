#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - check the code for Holberton School students.
 * @filename: Filename
 * @letters: number of space for letters
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, check, count;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	buf = malloc(letters * sizeof(char));
	if (fd == -1)
		return (0);
	check = read(fd, buf, letters);
	if (check == -1)
		return (0);
	count = write(STDOUT_FILENO, buf, check);
	if (count == -1)
		return (0);
	close(fd);
	free(buf);
	return (count);
}
