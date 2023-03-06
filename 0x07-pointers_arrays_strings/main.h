#ifndef MAIN_H
#define MAIN_H

/*
* description: declares prototype for function declaration
*/
/**
* _putchar: function prototype to print character
*/

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);
void print_diagsums(int *a, int size);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
int reverse_string(char *s);
void print_buffer(char *b, int size);
void _putchar(char n);

#endif
