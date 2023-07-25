#include "main.h"
/**
  * main - test precision on non custom specifiers
  * Return: 0 (Success)
  */

int main(void)
{
	printf("%.f\n", 19.5);
	_printf("%.f\n", 19.5);

	printf("%.1f\n", 19.5);
        _printf("%.1f\n", 19.5);

	printf("%.4f\n", 19.5);
        _printf("%.4f\n", 19.5);
	return (0);
}
