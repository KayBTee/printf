#include "main.h"
/**
  * main - test +, # and space flags
  * Return: 0 (success)
  */
int main(void)
{
	printf("%+d\n", 50);
	_printf("%+d\n", 50);

	printf("%#d\n", 50);
        _printf("%#d\n", 50);

	printf("% d\n", -50);
        _printf("% d\n", -50);
	return (0);
}
