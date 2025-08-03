#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text to the end of an existing file
 * @filename: name of the file
 * @text_content: string to add at the end
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t to_write;
	size_t len;

	to_write = 0;
	len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}

		to_write = write(fd, text_content, len);
		if (to_write == -1 || (size_t)to_write != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
