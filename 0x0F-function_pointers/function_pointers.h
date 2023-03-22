#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
* _putchar: function prototype to print character
*/

int _putchar(char c);
void print_name(char *name, void (*f) (char *));

#endif
