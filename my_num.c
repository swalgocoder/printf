#include "holberton.h"
#include <stdarg.h>
/**
 *my_puts_str - str followed by a new line
 *@str: string
 *
 */
void my_puts_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
/**
 *my_percentage - % as an input
 *@per: A %
 *Return: the % char
 */
int my_percentage(int per)
{
	per = '%';
	_putchar(per);
	return (1);
}

/**
 * _abs - absolute value of an integer
 * @i: interger to computer
 *
 * Return: absolute value;
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	else
		return (i);
}

/**
 * itoa - integer to string
 * @n: integer
 * @s: array of chars
 *
 * Return: int
 */
int itoa(int n, char s[])
{
	int i;

	i = 0;
	if (n / 10 != 0)
		i = itoa(n / 10, s);
	else if (n < 0)
		s[i++] = '-';

	s[i++] = _abs(n % 10) + '0';
	s[i] = '\0';

	return (i);
}

/**
 * my_number - prints numbers
 * @n: number
 * Return: number
 */

int my_number(int n)
{
char buffer[5];

return(itoa(n, buffer));
}
