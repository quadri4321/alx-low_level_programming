#include "main.h"
/**
 * main - check the code
 * C program to prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0.
**/
int main(void)
{

print_alphabet();
int c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
_putchar("\n");
}
return (0);
}
