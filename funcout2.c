#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_binary - Prints binary data
 * @x: integer variable
 */

void print_binary(unsigned int x)
{
	if (x > 1)
	{
		print_binary(x / 2);
	}
	printf("%d", x % 2);
}

/**
 * _printf - prints out to standard conversion types
 * @format: output format
 * Return: non-null
 */

int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;

	va_start(args, format);

	for (const char *p = format; *p != '\0'; ++p)
	{
		if (*p != '%')
		{
			putchar(*p);
			++printed_chars;
			continue;
		}
		++p;

		if (*p == 'b')
		{
			unsigned int x = va_arg(args, unsigned int);

			print_binary(x);
			printed_chars += sizeof(unsigned int) * 8;
		} else
		{
			putchar('%');
			putchar(*p);
			printed_chars += 2;
		}
	}

	va_end(args);
	return (printed_chars);
}
