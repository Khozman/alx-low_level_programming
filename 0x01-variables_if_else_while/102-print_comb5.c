#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main section
 * Description: This code prints numbers with commas
 * Return: 0
 */
int main(void)
{
	int i, j;
	int newLine = 10;
	int space = 32;
	int comma = 44;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(space);
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(comma);
					putchar(space);
				}
			}
		}
	}
	putchar(newLine);
	return (0);
}
