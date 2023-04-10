#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: Already present file
 * @text_content: A NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fpo, append;

	if (filename == NULL)
		return (-1);

	fpo = open(filename, O_WRONLY | O_APPEND);
	if (fpo == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fpo);
		return (1);
	}

	append = write(fpo, text_content, strlen(text_content));
	if (append == -1)
	{
		close(fpo);
		return (-1);
	}

	close(fpo);
	return (1);
}
