#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main section
 * Description: This code prints alphabets
 * Return: 0
 */
int main(void)
{
	int num = 48;
	int alph = 97;
	int newLine = 10;

	while (num < 57)
	{
		putchar(num);
		num++;

		while (num == 57 && alph < 103)
		{
			putchar(alph);
			alph++;
			if (alph == 103)
			{
				putchar(newLine);
			}
		}
	}
	return (0);
}
