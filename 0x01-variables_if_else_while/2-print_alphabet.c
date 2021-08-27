#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Main section
 * Description: This code prints alphabets
 * Return: 0
 */
int main(void)
{
	int a = 97;
	int emptyLine = 10;

	while (a < 123)
	{
		putchar(a);
		a++;
		if (a == 123)
		{
			putchar(emptyLine);
		}
	}
	return (0);
}
