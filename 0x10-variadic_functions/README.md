# 0x10. C - Variadic functions

### Task 0: 0-sum_them_all.c
Write a function that returns the sum of all its parameters.
* Prototype: int sum_them_all(const unsigned int n, ...);
* If n == 0, return 0

### Task 1: 1-print_numbers.c
Write a function that prints numbers, followed by a new line.
* Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
* where separator is the string to be printed between numbers
* and n is the number of integers passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* Print a new line at the end of your function

### Task 2: 2-print_strings.c
Write a function that prints strings, followed by a new line.
* Prototype: void print_strings(const char *separator, const unsigned int n, ...);
* where separator is the string to be printed between the strings
* and n is the number of strings passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* If one of the string is NULL, print (nil) instead
* Print a new line at the end of your function

### Task 3: 3-print_all.c
Write a function that prints anything.
Prototype: void print_all(const char * const format, ...);