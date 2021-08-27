#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main section
 * Description: This code prints alphabets lowercase backwards
 * Return: 0
 */
int main(void)
{
	int z = 122;
	int emptyLine = 10;

	while (z >= 97)
	{
		putchar(z);
		z--;
		if (z == 96)
		{
			putchar(emptyLine);
		}
	}
	return (0);
}
