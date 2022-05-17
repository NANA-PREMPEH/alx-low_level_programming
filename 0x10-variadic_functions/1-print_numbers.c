#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that print numbers, followed by a new line.
 *
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list appa;
	unsigned int index_i;

	/* initialize the argument list from the start */
	va_start(appa, n);

	/* iterate through each argument*/
	for (index_i = 0; index_i < n; index_i++)
	{
		/* print next argument */
		printf("%d", va_arg(appa, int));
		/* print separator only between arguments */
		if (separator && index_i != n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(appa);
	printf("\n");
}
