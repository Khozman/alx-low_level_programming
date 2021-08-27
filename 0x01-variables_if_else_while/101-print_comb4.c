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
	int j = 48;
	int k = 48;
	int newLine = 10;
	int space = 32;
	int comma = 44;

	while (i <= 55)
	{
		while (j <= 56)
		{
			while (k <= 57)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == 55 && j == 56 && k == 57))
					{
						putchar(comma);
						putchar(space);
					}

				
				}
				k++;
			}
			k = 48;
			j++;
		}
		j = 48;
		i++;
	}
	putchar(newLine);
	return (0);
}
