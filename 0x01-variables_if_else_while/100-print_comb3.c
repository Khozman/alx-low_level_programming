#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main section
 * Description: This code prints numbers from 00 to 99
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int newLine = 10;
	int space = 32;
	int comma = 44;

	while (i <= 57)
	{
		while (j <= 57)
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{
					putchar(newLine);
				}
				else
				{
					putchar(comma);
					putchar(space);
				}
			}
			j++;
		}
		j = 48;
		i++;
	}
	return (0);
}
