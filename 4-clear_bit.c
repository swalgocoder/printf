#include "holberton.h"
#include <stdio.h>
/**
 * clear_bit - toggles the bit to 0 as indexed
 * @n: number
 * @index: indexed postion
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
