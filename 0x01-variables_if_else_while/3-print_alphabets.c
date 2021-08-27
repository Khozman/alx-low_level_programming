#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main section
 * Description: This code prints alphabets
 * Return: 0
 */
int main(void)
{
	int lowerCase = 97;
	int upperCase = 65;
	int newLine = 10;

	while (lowerCase < 123)
	{
		putchar(lowerCase);
		lowerCase++;

		while (lowerCase == 123 && upperCase < 91)
		{
			putchar(upperCase);
			upperCase++;
			if (upperCase == 91)
			{
				putChar(newLine);
			}
		}
	}
	return (0);
}
