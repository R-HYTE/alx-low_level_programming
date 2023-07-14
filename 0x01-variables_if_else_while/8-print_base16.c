#include <stdio.h>
/**
 * main - Prints all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int num;
	char myChar;

	num = 0;
	myChar = 'a';

	while
		(num < 10)
		{
			putchar('0' + num);
			num++;
		}
	while
		(myChar <= 'f')
		{
			putchar(myChar);
			myChar++;
		}
	putchar ('\n');
	return (0);
}
