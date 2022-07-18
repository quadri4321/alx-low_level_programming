#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int size = 0; 

while (size < n)
{
*(s + size) = b;
size++;
}
return (s);
}
