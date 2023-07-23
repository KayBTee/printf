#include "main.h"
/**
 * _printf - function producing output according to a format
 * @format: the pointer to the format specifier used
 * Return: the number of characters printed (excluding the null
 * byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, count = 0;

	spec_t specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	va_start(args, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			for (j = 0; specifiers[j].spec; j++)
			{
				if (format[i + 1] == *specifiers[j].spec)
				{
					count += specifiers[j].f(args);
					i++;
					break;
				}
			}
			if (!specifiers[j].spec && format[i + 1] != '\0')
			{
				write(1, &format[i], 1);
				count++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
