#include "main.h"
/*
* main.h for input/output
*/

/**
* _islower - checks for alphabets
* description: function definition set for procedure
* @c: charcter to be checked
* Return: retun 1 on true and 0 if false
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
