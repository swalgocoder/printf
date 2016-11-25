#include "holberton.h"
#include <stdarg.h>
/**
 *my_puts_str - str followed by a new line
 *@str: string
 *Return: void
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
 *Return: 1
 */
int my_percentage(int per)
{
	per = '%';
	_putchar(per);
	return (1);
}


/**
 * itoa - integer to string
 * @n: integer
 * @s: array of chars
 *
 * Return: int
 */
size_t strlen(const char *string) {
	const char *s;
	s = string;
	while (*s)
		s++;
	return s - string;
}
char *strrev(char *str) {
	char *p1, *p2;
	if (!str || !*str)
		return str;
	for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	return str;
}
char *itoa(int n, char *s, int b) {
	static char digits[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	int i=0, sign;
    
	if ((sign = n) < 0)
		n = -n;
	do {
		s[i++] = digits[n % b];
	} while ((n /= b) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	return strrev(s);
}
/**
 * my_number - prints numbers
 * @n: number
 * Return: number
 */

int my_number(int n)
{
char buffer[100];

return(itoa(n, buffer));
}
