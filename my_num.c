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
 * my_number - prints out numbers
 * @n: number
 * Return: number
 */
//int my_number(int n)
//{
//	int sign, ten, chars;
//
//	chars = 0;
//	sign = 1;
//	ten = 1000000000;
//	if (n > 0)
//	{
//		n = n * -1;
//		sign = sign * -1;
//	}
//	if (n != 0)
//	{
//		while (n / ten == 0)
//		{
//			ten = ten / 10;
//		}
//		if (sign == 1)
//		{
//			_putchar('-');
//			chars++;
//		}
//		while (ten >= 1)
//		{
//			_putchar(-(n / ten) + '0');
//			chars++;
//			n = n % ten;
//			ten = ten / 10;
//		}
//	}
//	else
//	{
//		_putchar('0');
//		chars++;
//	}
//	return (chars);
//}


/**
 * my_number - prints numbers
 * @n: number
 * Return: number
 */
int my_number(int n)
{
char buffer[5];


//int main() {
//	int num = 123;
//	char buf[5];
//	itoa(num, buf, 10);
//	printf("%s\n", buf);
//	return 0;
//}

//int strlen(char *string) 
//{
//	char *s;
//  int count;
//	s = string;
//	while (*s)
//		s++;
//    count;
//	return (count);
//}

//char *strrev(char *str) 
//{
//	char *p1, *p2;
//	if (!str || !*str)
//		return str;
//	for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
//		*p1 ^= *p2;
//		*p2 ^= *p1;
//		*p1 ^= *p2;
//	}
//	return str;
//}

char *itoa(int n, char *s) 
{
	static char digits[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	int i=0, sign;
    
	if ((sign = n) < 0)
		n = -n;
	do {
		s[i++] = digits[n % 10];
	} while ((n /= b) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	return (i);
}

*itoa(n, buffer);
}
