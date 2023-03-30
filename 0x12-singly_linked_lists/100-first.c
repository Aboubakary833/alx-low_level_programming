#include <stdio.h>

void execBeforeMain(void)__attribute__((constructor));
void execBeforeMain(void)__attribute__((destructor));

/**
 * execBeforeMain - check the code
 *
 * Return: Always 0.
 */
void execBeforeMain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
