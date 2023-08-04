/**
 * binary_to_uint - convert binary string to decimalNum
 * @b: binary string
 *
 * Return: decimalNum (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalNum;
	unsigned int i;

	for (decimalNum = 0,i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			decimalNum = (decimalNum << 1) | 1;
		else if (b[i] == '0')
			decimalNum <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (decimalNum);
}