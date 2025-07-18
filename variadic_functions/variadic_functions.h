#ifndef MAIN_H
#define MAIN_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct for_print - Use to keep a type and an display function
 * @type: the future type of element
 * @print_func: pointer to the function that print that type
**/
typedef struct type_print
{
	char types;
	void (*print_func)(va_list *);
} type_t

#endif
