#include "main.h"
#include <unistd.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_file;
	size_t len;

	write_file = 0;
	len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}

		write_file = write(fd, text_content, len);
		if (write_file == -1 || (size_t)write_file != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
