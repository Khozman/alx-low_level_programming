#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main section
 * Description: This code prints alphabets
 * Return: 0
 */
void printCharacter(int i);
int main(void)
{
	int lowerCase = 97;
	int upperCase = 65;
	int newLine = 10;

	while (lowerCase < 123)
	{
		printCharacter(lowerCase);
		lowerCase++;

		while (lowerCase == 123 && upperCase < 91)
		{
			printCharacter(upperCase);
			upperCase++;
			if (upperCase == 91)
			{
				printCharacter(newLine);
			}
		}
	
	}
	return (0);
}

void printCharacter(int i)
{
	putchar(i);
}
