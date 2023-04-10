#include "main.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b: the binary number
 * Return: the decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;

	decimal = 0;

	if (!b)
		return (0);

	for (; *b != '\0' ; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		decimal = decimal << 1;

		if (*b == '1')
			decimal = decimal | 1;
	}
	return (decimal);
}


