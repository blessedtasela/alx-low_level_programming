#include <unistd.h>
#ifndef HEADER_FILE
#define HEADER_FILE

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
