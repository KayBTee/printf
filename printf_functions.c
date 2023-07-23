#include "main.h"
/**
 * print_char - print a character
 * @args: arguments on va_list
 * Return: number of characters printed
 */
int print_char(va_list args)
{
	char c;
	int count = 0;

	c = va_arg(args, int);
	count += write(1, &c, 1);
	return (count);
}
/**
 * print_string - print a character
 * @args: arguments on va_list
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *str;
	int count = 0;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		count += write(1, "(null)", 6);
		return (1);
	}
	count += write(1, str, _strlen(str));
	return (count);
}
/**
 * print_percent - print a character
 * @args: arguments on va_list
 * Return: number of characters printed
 */
int print_percent(va_list args)
{
	int count = 0;
	(void) args;

	count += write(1, "%", 1);
	return (count);
}
/**
 * _strlen - function that returns the length of a string
 * @s: the pointer to the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
