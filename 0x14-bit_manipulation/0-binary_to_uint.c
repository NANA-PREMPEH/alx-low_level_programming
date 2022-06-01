#include "main.h"

/**
 * binary_to_unsignnt - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_unsignnt(const char *b)
{
	unsigned int unsign;
	int length, base_2;

	if (!b)
		return (0);

	unsign = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base_2 = 1; length >= 0; length--, base_2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			unsign += base_2;
		}
	}

	return (unsign);
}
