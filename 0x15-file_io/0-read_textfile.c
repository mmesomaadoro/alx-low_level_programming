#include "main.h"

/**
 *  read_textfile - function that reads a text file &
 * prints it to the POSIX standard output
 * @filename: file name to be read and printed
 * @letters: number of letters read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int bd;
	ssize_t byt_rd, byt_wr;

	if (filename == 0)
		return (0);

	bd = open(filename, O_RDONLY);

	if (bd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));

	if (buff == NULL)
		return (0);

	byt_rd = read(bd, buff, letters);
	byt_wr = write(STDOUT_FILENO, buff, byt_rd);

	close(bd);

	free(buff);

	return (byt_wr);
}

