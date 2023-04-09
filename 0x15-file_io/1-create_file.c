#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: is a NULL terminated string t write to the file
 * Return: 1 on success, -1 on file  of file not been created nor written
 */
int create_file(const char *filename, char *text_content)
{
	int khy, gft, len = 0;

	if (filename == NULL)
		return (-1);

	khy = fopen(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (khy < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	gft = write(khy, text_content, len);
	fclose(khy);
	if (gft < 0)
		return (-1);
	return (1);
}
