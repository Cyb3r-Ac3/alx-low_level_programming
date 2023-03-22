#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a given name using a specified function
 * @name: the name to print
 * @f: a function pointer that takes a string argument and returns void
 *
 * Description: This function takes a string and
 * a function pointer as arguments,
 * and calls the specified function with the string as its argument.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name); /* Call the function pointed to by f with name as the argument */
}

/**
 * print_string - prints a given string to stdout
 * @str: the string to print
 *
 * Description: This function takes a string as an argument and
 * prints it to stdout.
 */
void print_string(char *str)
{
	printf("%s\n", str);
}
