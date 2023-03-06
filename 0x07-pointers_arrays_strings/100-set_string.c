#include "main.h"
#include <stdio.h>
/*
* main.h for input/output
*/

/**
* set_string- function that points a pointer to a pointer
* @s: first pointer
* @to: second pointer
* Return: returns 0 on success
*/

void set_string(char **s, char *to)
{
	*s = to;
}
