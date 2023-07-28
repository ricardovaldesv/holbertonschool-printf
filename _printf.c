#include "main.h"

/**
 * _printf - function that prints anything
 * @format: list of types of arguments
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	int i = 0, x;
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
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			for (x = 0; cases[x].ptr != NULL; x++)
			{
				if (format[i + 1] == *(cases[x].ptr))
				{
					cases[x].function(str, arguments);
					i++;
				}
			}
		}
		else
		{
			str[_strlen(str) + 1] = '\0';
			str[_strlen(str)] = format[i];
		}
		i++;
	}
	i = _strlen(str);
	write(1, str, i);
	va_end(arguments);
	free(str);
	return (i);
}
