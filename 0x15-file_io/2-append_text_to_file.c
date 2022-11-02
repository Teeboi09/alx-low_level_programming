#include "main.h"

int get_length(char *str);

/**
 * append_text_to_file - code
 * @filename: code
 * @text_content: code
 *
 * Return: code
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;
	char *str = text_content;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (str)
	{
		len = get_length(str);
		wr = write(fd, str, len);
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 * get_length - code
 * @str: code
 *
 * Return: code
 */
int get_length(char *str)
{
	int i, length = 0;

	if (!str)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		length++;
	return (length);
}
