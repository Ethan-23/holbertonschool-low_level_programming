#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - check the code for Holberton School students.
 * @filename: Filename
 * @text_content: given string
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writer, charnum;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		for (charnum = 0; text_content[charnum] != '\0'; charnum++)
		{}
	writer = write(fd, text_content, charnum);
	if (writer == -1)
		return (-1);
	close(fd);
	return (1);
}
