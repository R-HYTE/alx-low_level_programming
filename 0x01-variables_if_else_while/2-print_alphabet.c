#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char myAlphabet;

	myAlphabet = 'a';
	while
		(myAlphabet <= 'z')
		{
			putchar(myAlphabet);
			myAlphabet++;
		}
	putchar('\n');
	return (0);
}
