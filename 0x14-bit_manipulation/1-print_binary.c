#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints decimal as binary
 * @n: long integer
 */

void print_binary(unsigned long int n)
{
	long int bitSize;
	char c;
	int flagBit;

	bitSize = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	if (n == 1)
	{
		printf("1");
		return;
	}

	flagBit = 0;

	while (bitSize >= 0)
	{
		c = (n >> bitSize) & 1;

		if (flagBit == 1)
			putchar(c + '0');
		else
		{
			if (c == 1)
			{
				putchar(c + '0');
				flagBit = 1;
			}
		}

		bitSize -= 1;
	}
}
