#include <stdio.h>
#include "main.h"
/**
  * main - test task 0
  * Return: 0 (Success)
  */

int main(void)
{
	char *s;

	s = "This is a string";

	_printf("%c\n", 'l');
	printf("%c\n", 'l');
	_printf("%s\n", s);
	printf("%s\n", s);
	_printf("%%\n");
	printf("%%\n");
	return (0);
}
