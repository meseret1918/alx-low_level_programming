#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, text = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[text] != '\0')
	{
		text++;
	}

	file = open(filename, O_WRONLY | O_APPEND, 0);

	if (file == -1)
		return (-1);

	write(file, text_content, text);

	return (1);
}
