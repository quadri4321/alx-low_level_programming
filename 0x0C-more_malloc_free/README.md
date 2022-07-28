# 0x0C. C - More malloc, free

### Task 0: 0-malloc_checked.c
Write a function that allocates memory using malloc.
* Prototype: void *malloc_checked(unsigned int b);
* Returns a pointer to the allocated memory
* if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

### Task 1: 1-string_nconcat.c
Write a function that concatenates two strings.
* Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
* The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
* If the function fails, it should return NULL
* If n is greater or equal to the length of s2 then use the entire string s2
* if NULL is passed, treat it as an empty string

### Task 2: 2-calloc.c
Write a function that allocates memory for an array, using malloc.
* Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
* The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
* The memory is set to zero
* If nmemb or size is 0, then _calloc returns NULL
* If malloc fails, then _calloc returns NULL

### Task 3: 3-array_range.c
Write a function that creates an array of integers.

* Prototype: int *array_range(int min, int max);
* The array created should contain all the values from min (included) to max (included), ordered from min to max
* Return: the pointer to the newly created array
* If min > max, return NULL
* If malloc fails, return NULL

### Task 4: 100-realloc.c
Write a function that reallocates a memory block using malloc and free
* Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

### Task 5: 101-mul.c
Write a program that multiplies two positive numbers.
* Usage: mul num1 num2
* num1 and num2 will be passed in base 10
* Print the result, followed by a new line
* If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98
* num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98
* 