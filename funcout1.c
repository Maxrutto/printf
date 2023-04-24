#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Function that produces output according to format
 * format - This format is the standard output format
 * chars_num - This is an array of characters
 */

int _printf(const char *format, ...)
{
	int chars_num;

	va_list args;

	va_start(args, format);

	va_end(args);

	chars_num = vfprintf(stdout, format, args);

	return (chars_num);
}

/**
 * _printf - It's application in the conversion specifiers
 * main - contains these functions
 * Return - Null
 */

int master(void)
{
	char v = 'b';
	char str[] = "I am Max";

	int chars_num1 = _printf("My character is: %c\n", v);
	int chars_num2 = _printf("My string is: %s\n", str);

	printf("No. of characters printed for the first call: %d\n", chars_num1);
	printf("No. of characters printed for the second call: %d\n", chars_num2);

	return (0);
}
