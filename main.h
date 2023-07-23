#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  * struct specifier - struct to map format specifiers to their corresponding functions
  * @spec: the format specifier
  * @f: the printing function
  */
typedef struct specifiers {
	char *spec;
	int (*f)(va_list);
}spec_t;
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
#endif
