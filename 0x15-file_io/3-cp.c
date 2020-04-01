#include "holberton.h"
#define BF_SIZE 1024
/**
 * copy_from_to - funtion copy file to file
 * @name_from_file: name of file source
 * @name_to_file: name file destine
 * @fds: file description
 * Return: Always a integer
 */

int copy_from_to(const char *name_from_file, char *name_to_file, int *fds)
{
	int fd_file1, fd_file2, size = 0, fd;
	char bufer[BF_SIZE];

	if (bufer == NULL)
		return (99);

	if (name_from_file == NULL || name_to_file == NULL)
		return (-1);

	fd_file1 = open(name_from_file, O_RDONLY);
	if (fd_file1 == -1)
		return (98);

	fd_file2 = open(name_to_file, O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd_file2 == -1)
		return (99);

	size = read(fd_file1, bufer, 1024);

	fd = write(fd_file2, &bufer, size);
	if (fd != size)
		return (99);

	if (close(fd_file2) == -1)
	{
		*fds = fd_file2;
		return (100);
	}
	if (close(fd_file1) == -1)
	{
		*fds = fd_file1;
		return (100);
	}

	return (0);
}


/**
 * main - check the code for Holberton School students.
 * @ac: count of the argummets
 * @files: argumments typing for user
 * Return: Always 0.
 */
int main(int ac, char **files)
{
	int error = 0;
	int file_desct;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	error = copy_from_to(files[1], files[2], &file_desct);
	/* if file_from does not exist, exit with code 98 */
	if (error == 98)
		dprintf(2, "Error: Can't read from file %s\n", files[1]);
	/* if you can not create or if write fails, exit 99 */
	if (error == 99)
		dprintf(2, "Error: Can't write to %s\n", files[2]);
	if (error == 100)
		dprintf(2, "Error: Can't close fd %d\n", file_desct);

	exit(error);

}
