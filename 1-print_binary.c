#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* print_binary - binary representation
* @n: number input
* Return: void
**/
void print_binary(unsigned long int n)
{

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n > 1)
	print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');

}
