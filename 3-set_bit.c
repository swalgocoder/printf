#include "holberton.h"
/**
 * set_bit - toggles the bit as indexed
 * @n: number
 * @index: index postion of bit
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	num = 1 << index;
	*n = *n | num;
	return (1);
}
