#include "variadic_function.c"

/**
 * print_strings - function that prints string
 * @seperator: the string to be printed between strings
 * @n: is the number of string passed to the function
 *
 *
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *sp;

	va_list(ap, n);

	for (i = 0; i < n; i++)
	{
		sp = va_arg(ap, char *);

		if (sp)
			printf("%s", sp);
		else
			printf("(nil)");

		if (i < n - 1)
			if (seperator)
				printf("%s", seperator);
	}

	printf("\n");
	va_end(ap);
}
