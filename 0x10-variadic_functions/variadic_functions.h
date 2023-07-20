#ifndef FUNC_H
#define FUNC_H
#include <stdarg.h>
/**
 * struct vab - datatype of struct
 *
 * @arg: member of the datatype
 * @pf: pointer function
 */
typedef struct vab
{
	char *arg;
	void (*pf)(va_list);
} vab;
#endif
#ifndef _PROTOTYPE_H
#define _PROTOTYPE_H
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
