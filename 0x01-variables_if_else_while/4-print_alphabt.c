#include <stdio.h>
/**
 * main - Prints specific letters in lowercase
 * Return: 0
 */
int main(void)
{
	char myChar = 'a';

	while
		(myChar <= 'z')
		{
			if (myChar != 'e' && myChar != 'q')
				putchar(myChar);
			myChar++;
		}
	putchar('\n');
	return (0);
}
