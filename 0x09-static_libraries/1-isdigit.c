#include "main.h"
/*
* main.h for input/output
*/

/**
* _isdigit - checks alphabet in upper or lower case
* description: function definition set for procedure
* @c: charcter to be checked
* Return: retun 1 on true and 0 if false
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
