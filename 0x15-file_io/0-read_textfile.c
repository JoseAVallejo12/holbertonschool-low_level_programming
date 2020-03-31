#include "holberton.h"

/**
 * read_textfile - funtion for read file
 * @filename: name of file
 * @letters: length of character to read in the file
 * Return: number the character reads
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fb, read_int;
	/* best practique is better usar malloc that array */
	char *buf = (char *)malloc(sizeof(char) * letters);

	/* if failure malloc o the string filename is null return o */
	if (filename == NULL || buf == NULL)
		return (0);

	/* if fauilure open file return 0 */
	fb = open(filename, O_RDONLY);
	if (fb == -1)
		return (0);
	
	/* if fauilure read file return 0 */
	read_int = read(fb, buf, letters);
	if (read_int == -1)
		return (0);

	/* add null caracter for indicate finish of string */
	buf[read_int] = '\0';

	close(fb);

	return (write(STDOUT_FILENO, buf, read_int));
}
