#include "holberton.h"
#include <string.h>
/**
 * read_textfile - funtion for read file
 * @filename: name of file
 * @letters: length of character to read in the file
 * Return: number the character reads
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fb, read_int;
	char buf[letters];

	fb = open(filename, O_RDONLY);
	if (fb == -1)
	{
		printf("fails open file\n");
		exit(-1);
	}
	read_int = read(fb, buf, letters);
	buf[read_int] = '\0';

	close(fb);

	return (write(STDOUT_FILENO, buf, read_int));
}
