#include "main.h"
/**
 * _printf - function producing output according to a format
 * @format: the pointer to the format specifier used
 * Return: the number of characters printed (excluding the null
 * byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	char *str, c;
	va_list args;

	va_start(args, format);
	for (; *format; format++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format != 'c' && *format != 's' && *format != '%')
			{
				count += write(1, "%", 1);
				count += write(1, format, 1);
				continue;
			}
			switch (*format)
			{
				case 'c':
						c = va_arg(args, int);
						count += write(1, &c, 1);
						break;
				case 's':
						str = va_arg(args, char *);
						count += write(1, str, _strlen(str));
						break;
				case '%':
						count += write(1, "%", 1);
						break;
				default:
					break;
			}
		}
		else
			count += write(1, format, 1);
	}
	va_end(args);
	return (count);
}
