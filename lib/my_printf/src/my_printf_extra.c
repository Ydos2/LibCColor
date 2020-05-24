/*
** EPITECH PROJECT, 2020
** my_printf_extra
** File description:
** my_printf_extra
*/

#include <stdlib.h>
#include <stdarg.h>
#include "../include/print.h"

void my_print_modulo(char *arg, va_list ap, char *exceed, int index)
{
    if (exceed == NULL || ap == NULL || arg[index] != '%')
        return;
    my_put_char('%');
}