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

	
	va_start(appa, n);

	
	for (index_i = 0; index_i < n; index_i++)
	{
		
		printf("%d", va_arg(appa, int));
		
		if (separator && index_i != n - 1)
			printf("%s", separator);
	}
	
	va_end(appa);
	printf("\n");
}
