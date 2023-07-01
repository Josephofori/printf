#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print -  printer function struct
 * @type_arg: character identifier
 * @f: pointing to a function
 *
 * Description: it stores pointers to a
 * printer function
 */
typedef struct print
{
char *type_arg;
int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_char(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_unt(va_list arguments, char *buf, unsigned int ibuf);
int print_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
unsigned int handl_buff(char *buf, char c, unsigned int ibuf);
int print_buff(char *buf, unsigned int nbuf);
int (*get_print_funct(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_funct(const char *s, int index);

#endif
