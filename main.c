#include <stdio.h>
#include <limits.h>
#include "holberton.h"
/**
 * main - Entry point
 * we are going to have two functions 1 to print
 * the other to change string to character
 *
 * Return: Always 0
 */
int main(void)
{
int len;
int len2;
_printf("String:[%s]\n", "I am a string !");
_printf("char: [%c]\n", 'H');
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
return (0);
}
