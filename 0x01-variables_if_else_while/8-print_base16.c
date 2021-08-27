#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main section
 * Description: This code prints numbers from 0-9 and alphabets a-f
 * Return: 0
 */
int main(void)
{
	int num = 48;
	int alph = 97;
	int newLine = 10;

	while (num < 58)
	{
		putchar(num);
		num++;

		while (num == 58 && alph < 103)
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
