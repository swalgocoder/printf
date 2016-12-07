#include "holberton.h"
/**
 * binary_to_uint - binary to unsigned int
 * @b: ptr to char str
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int sum, multi;


	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	len--;
	sum = 0;
	multi = 1;

	while (len >= 0)
	{
		if (b[len] == '1')
			sum += multi;
		len--;
		multi *= 2;
	}
	return (sum);
}
