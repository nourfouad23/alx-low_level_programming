/**
 * binary_to_uint - convert binary string to numb
 * @b: binary string
 *
 * Return: numb (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int numb;
	unsigned int i;

	for (numb = 0,i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			numb = (numb << 1) | 1;
		else if (b[i] == '0')
			numb <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (numb);
}