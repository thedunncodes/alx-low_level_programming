#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fpo, text;

	if (filename == NULL)
		return (-1);

	fpo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fpo == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	text = write(fpo, text_content, strlen(text_content));
	if (text == -1)
	{
		close(fpo);
		return (-1);
	}

	close(fpo);
	return (1);
}
