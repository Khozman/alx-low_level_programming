#include <stdlib.h>
#include <stdio.h>
/**
 *  * main - Main section
 *   * Description: This code prints alphabets except for e and q
 *    * Return: 0
 *     */
int main(void)
{
	int i = 48;
	int nextLine = 10;
	
	while (i <= 57)
	{
		putchar(i);
		i++;
		if (i == 58)
		{
			putchar(nextLine);
		}
	}
	return (0);
}
