#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number                        * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
