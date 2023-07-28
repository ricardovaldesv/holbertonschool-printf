#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * struct cases - Struct variables
 *
 * @ptr: For select function
 * @function: The function associated
 * @str : buffer
 * @ arguments : list of argument of funtions _putchar
 */

typedef struct cases
{
	char *ptr;
	char (*function)(char *str, va_list arguments);
} type_cases;

int form_h(const char *format, char *str,
		va_list arguments, type_cases *cases);

type_cases *get_cases();

int _strlen(char *s);
char cfunct(char *str, va_list arguments);
char perfunct(char *str, __attribute__((unused)) va_list arguments);
char sfunct(char *str, va_list arguments);
char add(char *str, char format);
char dfunct(char *str, va_list arguments);
int powr(int base, int expo);
#endif
