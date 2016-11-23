#include <unistd.h>

/**
 * _putchar - char to stdout
 * @c: The char
 *
 * Return: On success 1
 * On error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
