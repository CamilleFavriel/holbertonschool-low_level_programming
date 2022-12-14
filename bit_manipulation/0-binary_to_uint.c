#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i] != 0)
	{
		if (b[i] == '0' || b[i] == '1')
		{
		val = val << 1;
		val = val + b[i] - '0';
		}
		else
			return (0);
		i++;
	}
return (val);
}
