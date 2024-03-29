#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * to the POSIX STDOUT
 * @filename: filename to be open and read
 * @letters: Number of letters to be read and print
 * Return: actual number of letters it could read and print else 0 is returned
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fpo;
	char *buff;
	ssize_t print, rnum;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fpo = open(filename, O_RDONLY);
	if (fpo == -1)
	{
		free(buff);
		return (0);
	}

	print = read(fpo, buff, letters);
	if (print == -1)
	{
		free(buff);
		close(fpo);
		return (0);
	}

	rnum = write(STDOUT_FILENO, buff, print);
	if (rnum == -1)
	{
		free(buff);
		close(fpo);
		return (0);
	}

	free(buff);
	close(fpo);

	return (rnum);
}
