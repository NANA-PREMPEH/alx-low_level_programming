#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list v_list;
    unsigned int i;

    va_start(v_list, n);

    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(v_list, int));
        if (separator && i < n - 1)
            printf("%s", separator);
    }

    printf("\n");
    va_end(v_list);
}
