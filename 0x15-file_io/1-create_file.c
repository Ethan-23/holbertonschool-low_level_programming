#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - check the code for Holberton School students.
 * @filename: Filename
 * @text_content: given string
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int check, check1, count = 0;

	if (filename == NULL)
		return (-1);
	check = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (check == -1)
		return (-1);
	if (text_content != '\0')
		for (count = 0; text_content[count] != '\0'; count++)
		{}
		check1 = write(check, text_content, count);
		if (check1 == -1)
			return (-1);
	close(check);
	return (1);
}
