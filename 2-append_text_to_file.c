#include "holberton.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * append_text_to_file - append text to file
 * @filename: pointer to file
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_handle, len, file_process;

	if (!filename)
		return (-1);

	file_handle = open(filename, O_WRONLY | O_APPEND);
	if (file_handle == -1)
		return (-1);
	if (!text_content)
		return (1);

	for (len = 0; *(text_content + len) != '\0'; ++len)
		;
	file_process = write(file_handle, text_content, len);
	close(file_handle);
	if (file_process < 0)
		return (-1);
	return (1);
}
