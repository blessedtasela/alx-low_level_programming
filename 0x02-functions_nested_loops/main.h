#include <unistd.h>
#ifndef MAIN_H
#define MAIN_H

/*
* description: declares prototype for function declaration
*/
/**
* _putchar: function prototype to print character
*/

int _putchar(char i)
{
return (write(1,&i,1));
}

#endif
