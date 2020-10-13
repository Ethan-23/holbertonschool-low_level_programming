#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - checking size and setting to null
 * @size: size of char
 * @c: string
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
