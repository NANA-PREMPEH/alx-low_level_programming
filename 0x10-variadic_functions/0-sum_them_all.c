#include "variadic_functions.h"

/**
 * sum_them_all - returns the total of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: total of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list appa;
	unsigned int i;
	int total = 0;

	if (n == 0)
		return (0);

	va_start(appa, n);

	for (i = 0; i < n; i++)
		total += va_arg(appa, int);

	va_end(appa);

	return (total);
}
