#include "main.h"
/**
  * _strlen - function that prints string lenght
  * @s: string
  * Return: length
  */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

