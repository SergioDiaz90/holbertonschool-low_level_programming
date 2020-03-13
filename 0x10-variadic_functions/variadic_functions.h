#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct types
{
	char *arr;
        void(*f)(va_list data);
} type;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
