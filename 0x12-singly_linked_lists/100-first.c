#include<stdio.h>

/**
 * myStartupFun - add __attribute__ ((contructor)) to myStartupFun()
 * so that it is executed before main
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - this will executed befor the main
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
