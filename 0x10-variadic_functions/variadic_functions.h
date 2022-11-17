#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stddef.h>

/**
 * struct flags - Struct flags
 * @c_flag: flag
 * @f: the function associated
 */

typedef struct flags
{
	char *c_flag;
	void (*f)();
} v_flags;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
