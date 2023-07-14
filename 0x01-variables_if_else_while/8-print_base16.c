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
	myChar = 'A';

	while
		(num < 10)
		{
			putchar('0' + num);
			num++;
		}
	while
		(myChar <= 'F')
		{
			putchar(myChar);
			myChar++;
		}
	putchar ('\n');
	return (0);
}
