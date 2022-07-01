#include <stdio.h>
/**
 * main-Entry
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %ld bytes\n", (signed long)sizeof(d));
	printf("size of an int: %ld  bytes\n", (signed long)sizeof(a));
	printf("size of a long int: %ld  bytes\n", (signed long)sizeof(b));
	printf("size of a long long int: %ld bytes\n", (signed long)sizeof(c));
	printf("size of float: %ld bytes\n", (signed long)sizeof(f));
	return (0);
}
