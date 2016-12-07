#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits - flip the bit n to m
 * @n: number to flip
 * @m: number to flip to
 * Return: number of flip to flip from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int swap;
	unsigned int i;

	swap = n ^ m;
	i = 0;

	while (swap > 0)
	{
		if ((swap & 1) == 1)
			i++;
		swap = swap >> 1;
	}
	return (i);
}
