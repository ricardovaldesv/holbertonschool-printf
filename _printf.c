#include "main.h"

/**
 * _printf - function that prints anything
 * @format: list of types of arguments
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int loop;
	char *str = malloc(4096 * sizeof(char));
	va_list arguments;
	type_cases *cases = get_cases();

	if (str == NULL || format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(arguments);
		free(str);
		return (-1);
	}
	str[0] = '\0';
	va_start(arguments, format);

	loop = form_h(format, str, arguments, cases);
	


	i = _strlen(str);
	if (loop == 1)
		i++;
	write(1, str, i);
	va_end(arguments);
	free(str);
	return (i);
}
