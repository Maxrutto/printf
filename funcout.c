#include "main.h"

/**
 * _printf - Function that produces output according to format
 * format - This format is the standard output format
 * chars_num - This is an array of characters
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int chars_num = vfprintf(stdout, format, args);

	va_end(args);

	return (chars_num);
}

/**
 * _printf - It's application in the conversion specifiers
 * main - contains these functions
 * Return - Null
 */

int main(void)
{
	char v = 'b';
	char str[] = "I am Max";

	int chars_num1 = _printf("My character is: %c\n", c);
	int chars_num2 = _printf("My string is: %s\n", str);

	printf("No. of characters printed for the first call: %d\n", chars_num1);
	printf("No. of characters printed for the second call: %d\n", chars_num2);

	return (0);
}
