#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: amount of the arguments.
 * @...: Other parameters
 * Return: sum of its parameters.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int index, sum = 0;

va_start(nums, n);

for (index = 0; index < n; index++)

sum += va_arg(nums, int);

va_end(nums)

return (sum);
}




