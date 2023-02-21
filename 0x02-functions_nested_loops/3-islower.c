#include "main.h"
/*
* main.h for input/output
*/

/**
* _islower - checks if an alphabet is in lower case
* description: function definition set for procedure
* Return: retun 1 on true and 0 if false
*/

int _islower(int c)
{
	if ( c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
