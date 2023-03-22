#include "function_pointers.h"

/**
 * print_name - function that prints name of given input
 * @name: name to be printed
 * @f: function of name
 * Return: return nothing
 */

void print_name(char *name, void (*f) (char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
