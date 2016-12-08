#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * read_textfile -  use _putchar to print char array 
 * @filename: pointer to char array or file name
 * @size_t: letter: the actual number of letters
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  char *buffer = malloc(sizeof(char) * letters);
  int file_opn, file_handle, i;


  if (filename == NULL)
    return (0);

  if((file_opn = open(filename, O_RDWR)) < 0)
     return (0);

  if ((file_handle = read(file_opn, buffer, letters)) < 0)
      return (0);
    
  for (i = 0; i < file_handle; i++)
    _putchar(buffer[i]);

  close (file_opn);
      free(buffer);
  return (i);
}
