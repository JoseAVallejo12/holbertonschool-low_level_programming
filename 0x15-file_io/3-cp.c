#include "holberton.h"
#define BF_SIZE 1024

/**
 * close_file - close file processs
 * @fd: file description
 * Return: Always int
 */

int close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (-1);
	}
	return (0);
}

/**
 * copy_from_to - funtion copy file to file
 * @name_from_file: name of file source
 * @name_to_file: name file destine
 * Return: Always a integer
 */

int copy_from_to(const char *name_from_file, char *name_to_file)
{
	int fd_file1, fd_file2, fd_rd, fd_wr;
	char *bufer[BF_SIZE];

	fd_file1 = open(name_from_file, O_RDONLY);
	if (fd_file1 == -1)
		return (98);

	fd_file2 = open(name_to_file, O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd_file2 == -1)
		return (99);

	fd_rd = read(fd_file1, bufer, 1024);
	if (fd_rd == -1)
	{
		if (close_file(fd_file1) == -1 || close_file(fd_file2) == -1)
			return (100);
		else
			return (98);
	}

	fd_wr = write(fd_file2, bufer, BF_SIZE);
	if (fd_wr != BF_SIZE)
	{
		if (close_file(fd_file1) == -1 || close_file(fd_file2) == -1)
			return (100);
		else
			return (99);
	}

	if (close_file(fd_file1) == -1 || close_file(fd_file2) == -1)
		return (100);

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

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	error = copy_from_to(files[1], files[2]);
	/* if file_from does not exist, exit with code 98 */
	if (error == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", files[1]);
	/* if you can not create or if write fails, exit 99 */
	if (error == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", files[2]);

	exit(error);
}
