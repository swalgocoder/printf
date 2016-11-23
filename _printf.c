#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>
/**
 *my_str - prints out a string
 *@ptr_args: ptr to arguments
 *Return: The number of char
 */
int my_str(va_list ptr_args)
{
	char *j;
	int i, char_count;

	char_count = 0;
	j = va_arg(ptr_args, char *);
	if (j == NULL)
		j = "(null)";
	i = 0;
	while (j[i] != '\0')
	{
		_putchar(j[i]);
		i++;
		char_count++;
	}
	return (char_count);
}
/**
 *my_char - a funciton that prints out a character
 *@args: a variable that takes in a varrying amount of function arguments
 *Return: Zero is returned
 */
int my_char(va_list ptr_args)
{
	char j;

	j = va_arg(ptr_args, int);
	_putchar(j);
	return (1);
}
/**
 *my_int - prints out the integer
 *@ptr_args: a variable that takes in a varrying amount of function arguments
 *Return: The character
 */
int my_int(va_list ptr_args)
{
	int n, char_count;

	n = va_arg(ptr_args, int);
	char_count = print_number(n);
	return (char_count);
}
/**
 *_printf - Remaking the printf function in the standard input output library
 *@format: Detects what format the arguments come in as
 *Return: The number of characters to be printed
 */
int _printf(const char *format, ...)
{
	va_list ptr_args;
	int i, j, char_count;
	my_type data_type[] = {
		{"s", my_str},
		{"c", my_char},
		{"%", my_percentage},
		{"i", my_int},
		{"d", my_int},
		{NULL, NULL}
	};
	va_start(ptr_args, format);

	char_count = i = 0;
	if (format == NULL || ptr_args == NULL)
		return (char_count);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (j < 5)
			{
				if (*data_type[j].s == format[i])
				{
					char_count += (data_type[j].f(ptr_args));
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			char_count++;
		}
		i++;
	}
	va_end(ptr_args);
	return (char_count);
}
