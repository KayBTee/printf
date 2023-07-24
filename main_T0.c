#include <stdio.h>
#include "main.h"
/**
 * main - test task 0
 * Return: 0 (Success)
 */

int main(void)
{
        char *x;
        char *s;

        s = "This is a string";
        x = NULL;

        _printf("%c\n", 65);
        printf("%c\n", 65);

        _printf("%s\n", s);
         printf("%s\n", s);

        _printf("%%\n");
        printf("%%\n");

        printf("the real%s\n", x);
        _printf("my printf%s\n", x);
        return (0);
}
