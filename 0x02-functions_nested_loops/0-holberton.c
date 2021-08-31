#include "main.h"
/**
 * main - Prints string
 * Description: This code Prints Holberton
 * Return: 0
 */
int main(void)
{
	char c[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
