#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: 
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_file, write_file;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_file = read(fd, buffer, letters);
	if (read_file == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	write_file = write(STDOUT_FILENO, buffer, read_file);
	if (write_file != read_file)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (write_file);
}
