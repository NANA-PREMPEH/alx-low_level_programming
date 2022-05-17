#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list appa;
	unsigned int x = 0, y, z = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(appa, format);
	while (format && format[x])
	{
		y = 0;
		while (t_arg[y])
		{
			if (format[x] == t_arg[y] && z)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(appa, int)), z = 1;
			break;
		case 'i':
			printf("%d", va_arg(appa, int)), z = 1;
			break;
		case 'f':
			printf("%f", va_arg(appa, double)), z = 1;
			break;
		case 's':
			str = va_arg(appa, char *), z = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} x++;
	}
	printf("\n"), va_end(appa);
}
