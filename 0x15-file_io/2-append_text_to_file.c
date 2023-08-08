#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: add filename.
 * @text_content:  add at the end of the file
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int byt_rw, letter, pd;

	if (filename == 0)
		return (-1);

	pd = open(filename, O_WRONLY | O_APPEND);
	if (pd == -1)
		return (-1);

	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++)
			;
		byt_rw = write(pd, text_content, letter);
		if (byt_rw == -1)
			return (-1);
	}

	close(pd);
	return (1);
}
