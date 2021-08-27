#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main section
 * Description: This code prints numbers with commas
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int nextLine = 10;
	int comma = 44;
	int space = 32;

	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(comma);
			putchar(space);
		}
		i++;
		if (i == 58)
		{
			putchar(nextLine);
		}
	}
	return (0);
}
