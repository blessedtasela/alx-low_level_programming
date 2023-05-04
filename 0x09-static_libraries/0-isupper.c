#include "main.h"
/*
* main.h for input/output
*/

/**
* _isupper - checks alphabet in upper or lower case
* description: function definition set for procedure
* @c: charcter to be checked
* Return: retun 1 on true and 0 if false
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
