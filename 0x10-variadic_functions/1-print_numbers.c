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
	unsigned int index_1;

	/* initialize the argument list from the start */
	va_start(appa, n);

	/* iterate through each argument*/
	for (index_1 = 0; index_1 < n; index_1++)
	{
		/* print next argument */
		printf("%d", va_arg(appa, int));
		/* print separator only between arguments */
		if (separator && index_1 != n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(appa);
	printf("\n");
}
