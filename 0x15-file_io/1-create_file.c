#include "holberton.h"

/**
 * create_file - funtion open or create file
 * @filename: name of the file to open or create
 * @text_content: string to write in the file
 * Return: Always a integer
 */

int create_file(const char *filename, char *text_content)
{
	int file_description, size = 0, fd;

	file_description = open(filename, O_CREAT | O_WRONLY, 00600);

	if (file_description == -1 || filename == NULL)
	{
		close(file_description);
		return (-1);
	}

	while (*(text_content + size) != '\0')
		size++;

	if (text_content != NULL)
		fd = write(file_description, text_content, size);

	if (fd != size)
		return (-1);

	close(file_description);

	return (1);
}

