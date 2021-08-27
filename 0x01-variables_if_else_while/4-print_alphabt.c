#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main section
 * Description: This code prints alphabets except for e and q
 * Return: 0
 */
int main(void)
{
	int a = 97;
	int emptyLine = 10;
	int e = 101;
	int q = 113;

	while (a < 123)
	{
		putchar(a);
		a++;
		if (a == 123)
		{
			putchar(emptyLine);
		}
		else if (a == e)
		{
			a++;
		}
		else if (a == q)
		{
			a++;
		}
	}
	return (0);
}
