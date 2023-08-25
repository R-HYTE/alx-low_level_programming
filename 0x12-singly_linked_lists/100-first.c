#include <stdio.h>

void first(void) __attribute__ ((constructor(101)));
void second(void) __attribute__ ((constructor(102)));

/**
 * first - function executes before second()
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
}

/**
 * second - executes after first(), before main
 */
void second(void)
{
	printf("I bore my house upon my back!\n");
}
