#include "main.h"

/**
 * cfunct - add a character to the main string
 * @str: main string
 * @ch: character to add
 * Return: Void
 */
char cfunct(char *str, va_list arguments) // function case c
{
	char ch = va_arg(arguments, int);
	str[_strlen(str) + 1] = '\0';
	str[_strlen(str)] = ch;
	return (0);
}
/**
 * perfunct - add a % to the main string
 * @str:main string
 * Return: Void
 */
char perfunct(char *str, va_list arguments __attribute__((unused)))// function case %
{
	str[_strlen(str) + 1] = '\0';
	str[_strlen(str)] = '%';
	return (0);
}
/**
 * sfunct - adds a string to the main string
 * @str: main string
 * @s: string to add
 * Return: Void
 */
char sfunct(char *str, va_list arguments) // function case s
{
	char *s = va_arg(arguments, char *);
	int j = 0;

	if (s == NULL)
	{
		s = "(null)";
		while (s[j] != '\0')
		{
			str[_strlen(str)] = s[j];
			j++;
		}
	}
	else
	{
		while (s[j] != '\0')
		{
			str[_strlen(str)] = s[j];
			j++;
		}
	}
	str[_strlen(str)] = '\0'
		return (0);
}
