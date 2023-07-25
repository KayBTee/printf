#include "main.h"
/**
  * main - testing rot13'ed string specifier
  * Return: nothing
  */

int main(void)
{
	char *s;

	s = "Kabelo and Leen";

	_printf("%R\n", s);
	return (0);
}
