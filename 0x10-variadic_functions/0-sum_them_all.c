#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to return the sum of all its parameters
 * @n: integer
 *
 * Return: always (0)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);

	if (n == 0)
		return (0);
}
