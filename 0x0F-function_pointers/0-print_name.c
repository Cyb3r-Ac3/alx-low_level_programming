#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 *
 * @name: pointer to string containing the name to be printed
 * @f: pointer to function that takes a char pointer argument and returns void
 *
 * This function prints the name passed as an argument, using the function
 * pointed to by f to format the output. The format function should take a
 * char pointer argument and return void. If f is NULL, the name is printed
 * without any formatting.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}

	if (f != NULL)
	{
		f(name);
	}

	else
	{
		printf("%s\n", name);
	}
}
