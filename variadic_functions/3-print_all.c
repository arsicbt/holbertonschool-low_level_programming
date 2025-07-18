#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Print a charactere
 * @va_list: the list of argument
 * Return: void
**/
void print_char(va_list *list)
{
	printf("%c", va_list(*list, char));
}

/**
 * print_int - Print an integer
 * @va_list: the list of argument
 * Return: void
**/
void print_int(va_list *list)
{
	printf("%d", va_list(*list, int));
}

/**
 * print_float - Print a flaot
 * @va_list: the list of argument
 * Return: void
**/
void print_float(va_list *list)
{
	printf("%f", va_list(*list, float));
}

/**
 * print_string - Print a string
 * @va_list: the list of argument
 * Description: Check directly if the string is NULL and print (nil)
 * Return: void
**/
void print_string(va_list *list)
{
	char *string;

	string = va_list(*list, char *)

	if (string = NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", string);
	}
}

/**
**/
void print_all(const char * const format, ...)
{
	type_t type_print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	int i;

	while (type_print[i].types && format[0] != type_print[i].types[0])
	{
		i++;
	}

	if (type_print[i].types == type_print[i].types[0] && format[1] == '\0')
	{
		return (type_print[i].f);
	}

	return (print_all());
}
