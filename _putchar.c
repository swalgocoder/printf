#include <unistd.h>

/**
 * _putchar - char 2 stdout
 * @c: The char
 *
 * Return: On success 1, or -1 for error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
