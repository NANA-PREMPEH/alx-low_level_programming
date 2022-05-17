#include "variadic_functions.h"

/**
 * total_them_all - returns the total of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: total of its parameters.
 */
int total_them_all(const unsigned int n, ...)
{
	va_list appa;
	unsigned int i;
	int total = 0;

	if (x == 0)
		return (0);

	va_start(appa, x);

	for (i = 0; i < x; i++)
		total += va_arg(appa, int);

	va_end(appa);

	return (total);
}
