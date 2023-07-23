#include <stdio.h>
#include "main.h"
/**
  * main - test task 0
  * Return: 0 (Success)
  */

int main(void)
{
        char *s;
	char *x;

        s = "This is a string";
	x = NULL;

        _printf("%c\n", 'l');
        printf("%c\n", 'l');
        _printf("%s\n", x);
        printf("%s\n", x);
        _printf("%%\n");
        printf("%%\n");
        return (0);
}
