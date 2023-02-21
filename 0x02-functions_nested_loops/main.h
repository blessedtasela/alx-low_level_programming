#include <unistd.h>
#ifndef HEADER_FILE
#define HEADER_FILE
#endif

int _putchar(char i)
{
return (write(1, &i,1));

}
